#include<stdio.h>
void print(int arr[],int arr_size);
void checker(int arr[],int size);
//void insert(int arr[],int element,int position,int size);

int main (){
    int arr[100],arr_size,position,element;
    printf("Enter the size and array : ");
    scanf("%d",&arr_size);
    for(int i = 0 ; i<arr_size;i++){
        scanf("%d",&arr[i]);

    }
    print(arr,arr_size);
    checker(arr,arr_size);
   

    return 0;
}

void print(int arr[],int arr_size){
       printf("you entered this array \n ");
    for( int i =0 ;i<arr_size;i++){
     
        printf("%d ",arr[i]);
    }
printf("\n");
}

void checker(int arr[],int size){
    int flag_even=0,flag_odd=0,number;
    for(int i=0;i<size;i++){

    number= arr[i];

    if(number%2==0){
        flag_even++;
        
    }

    else
    {
        /* code */
        flag_odd++;
    }}
    
    if(flag_even>0 && flag_odd == 0) 
    printf("Even") ;
    
    
    else if(flag_even==0 && flag_odd >0) 
    printf("Odd") ;
    
    else
    printf("Mixed") ;
}