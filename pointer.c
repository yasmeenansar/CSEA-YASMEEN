#include<stdio.h>

void main()
{
    int a=12,b=10,sum;
    int *ptr,*ptr1;
    ptr=&a;
    ptr1=&b;
    sum=*ptr+*ptr1;
    printf("Address of a direct :%p\n",&a);
    printf("Address of a using pointer :%p\n",ptr);
    printf("Value of a :%d\n",a);
    printf("Value of a using pointer: %d",*ptr);

    printf("\nsum : %d",sum);
    sum=(*ptr)/(*ptr1);
    printf("\ndiv : %d",sum);

}