#include<stdio.h>
void print(int arr[],int arr_size);
//void insert(int arr[],int element,int position,int size);
void max(int arr[], int arr_size);
void min(int arr[], int arr_size);
int main (){
    int arr[100],arr_size,position,element;
    printf("Enter the size and array : ");
    scanf("%d",&arr_size);
    for(int i = 0 ; i<arr_size;i++){
        scanf("%d",&arr[i]);

    }
    print(arr,arr_size);
    
    printf("largest element in  array is : \n");
    max(arr,arr_size);

    printf("smallest element in  array is : \n");
    min(arr,arr_size);
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

/*void sum(int arr[],int size){
    int sum=0;
    for( int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

   
    
       printf("%d ",sum);
    

}*/

void max(int arr[],int arr_size){
    int largest ,i;
    largest=arr[0];
    for(i=1;i<arr_size;i++){
        if(largest<arr[i])
        largest=arr[i];
    }
    printf("%d \n",largest);

}

void min(int arr[],int arr_size){
    int smallest ,i;
    smallest=arr[0];
    for(i=1;i<arr_size;i++){
        if(smallest>arr[i])
        smallest = arr[i];
    }
    printf("%d",smallest);

}