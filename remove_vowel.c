#include<stdio.h>
#include<string.h>
#include<conio.h>

int remove_vowel(char str){
      if( str=='a'||str=='e'||str =='i'||str=='o'||str=='u'){
           return 0;
         }
      else
       return 1;
    }

void main(){
    char str[30] ,temp[30] ;
    int i=0,j=0;
    printf("Enter the string ");
    gets(str);
   // scanf("%s",str);
    
  
  while(str[i]){
  if(remove_vowel(str[i])==1)
    {
        temp[j]=str[i];
      j++;
     // i++;
       }
    //printf("%s",str[i]);}
  i++;
  
  }
  temp[j]='\0';

 
  puts(temp);
           
 //printf("%s",temp);
 //  puts(str);      
    
}