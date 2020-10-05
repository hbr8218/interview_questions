#include<stdio.h>
void print(int arr[],int x);
void insert(int arr[],int element,int position,int size);
int main (){
    int arr[100],arr_size,position,element;
    printf("Enter the size and array : ");
    scanf("%d",&arr_size);
    for(int i = 0 ; i<arr_size;i++){
        scanf("%d",&arr[i]);

    }
    print(arr,arr_size);
    
    printf("Enter the element , position : ");
    scanf("%d %d",&element, &position);
    insert(arr,position,element,arr_size);
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

void insert(int arr[],int position, int element,int size){

    int i;
    for ( i= size-1; i>=position-1; i--){
        arr[i+1] =arr[i];


    }
   arr[position-1] = element;

   for (i = 0; i <= size; i++)
    printf("%d ", arr[i]);


   //print(arr, size);
   
 //   return arr[i];

}