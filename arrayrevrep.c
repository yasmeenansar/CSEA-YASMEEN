#include<stdio.h>

/*void display(char a[],int n)
{
    for(int i=0;i<n;i++)
      printf("%c\t",a[i]);
      
}*/

void main()
{
    int a[10],temp;
    int n;

    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);

    printf("\nThe array is : ");
    for(int i=0;i<n;i++)
      printf("%d  ",a[i]);
    
    for(int i=0;i<(n/2);i++)
      {  
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
         
      }

    printf("\nThe new array is : ");
    for(int i=0;i<n;i++)
    {
      if(a[i]==0)
        printf("$  ");

      else
        printf("%d  ",a[i]);

    }
    
    
}