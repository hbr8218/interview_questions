#include<stdio.h>
void print(int arr[],int arr_size);
//void insert(int arr[],int element,int position,int size);
void sum(int arr[], int arr_size);
int main (){
    int arr[100],arr_size,position,element;
    printf("Enter the size and array : ");
    scanf("%d",&arr_size);
    for(int i = 0 ; i<arr_size;i++){
        scanf("%d",&arr[i]);

    }
    print(arr,arr_size);
    
    printf("Sum of element of array is : \n");
    sum(arr,arr_size);
    // scanf("%d %d",&element, &position);
    
    //arr_size+=1;
     //print(arr,arr_size);
    

    return 0;
}

void print(int arr[],int arr_size){
       printf("you entered this array \n ");
    for( int i =0 ;i<arr_size;i++){
     
        printf("%d ",arr[i]);
    }
printf("\n");
}

/*void insert(int arr[],int position, int element,int size){

    int i;
    for ( i= size-1; i>=position-1; i--){
        arr[i+1] =arr[i];


    }
   arr[position-1] = element;

   for (i = 0; i <= size; i++)
    printf("%d ", arr[i]);


   //print(arr, size);
   
 //   return arr[i];

}*/


// sum

void sum(int arr[],int size){
    int sum=0;
    for( int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

   
    
       printf("%d ",sum);
    

}