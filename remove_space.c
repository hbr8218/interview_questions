#include<stdio.h>
#include<string.h>

void remove_space(char str[]){
    int i,l=0;
    char j[100];
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]==' '){
        ++i;
    
        }
        else{
        j[l++]=str[i];
        }
   // l++;
    }
    j[l]='\0';
    puts(j);
}

int main()
{
    
    char str[100];
    printf("Enter the string with space ");
    gets(str);
    remove_space(str);
   // puts(str);
    return 0;
}
