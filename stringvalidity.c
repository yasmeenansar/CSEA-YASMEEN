#include<stdio.h>

void main()
{
    int count=0,i=0;
    char str[20];

    printf("Enter you string : ");
    scanf("%s",str);

    while(str[i]!='\0')
    {
         if(str[i]=='*')
          count++;

         else 
          count--;
     i++;
    }

     printf("String is valid with count = %d",count);
}