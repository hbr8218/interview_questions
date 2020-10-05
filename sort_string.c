#include<stdio.h>
#include<string.h>
#include<conio.h>
void sort(char str[]){
    char max[]= str[0];
    char min[] = str[1];
    char temp[30];

    //  //for(i=0;str[i]!='\0';i++)
    //  {
    //     // if(max[i]<=min[i]){
    //          //temp=max[i];
    //          max[i]=min[i];
    //          min[i]=temp;
    //      }
    //  }
    // }

void main(){
    char str[30] ,temp[30] ;
    int i=0,j=0;
    printf("Enter the string ");
    //gets(str);
    scanf("%[^\n]s",str);
    sort(str);
    printf(str);
 
}