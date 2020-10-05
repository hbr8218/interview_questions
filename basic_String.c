#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char str[40], str1[40],str2[40];
    // printf("Enter the name ");
    // //using gets or puts
    // gets(str);
    // puts(str);
    // printf("Using printf %s",str);
    // // lenght of name
    // printf("your name length is %d \n", strlen(str));
    // printf("your name reverse is %s", strrev(str));
    // ///to check weather a number is palindrom or not

    printf("\nEnter the first string : ");
    gets(str1);
    printf("Enter the second string : \n");
    gets(str2);
    if(strcmp(str1,str2)==0)
    printf("number is pallindrom");
    else
    {
     printf("Number is not pallindrom");
    }
    

    return 0;
}
