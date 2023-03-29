#include<stdio.h>

int prime(int num)
{
    for(int i=2;i<num;i++)
     if(num%i==0)
       return 0;
    
    return 1;
     
}

void main()
{
    int a[10],n,sum=0;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements of the array : ");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     sum+=a[i];
    }

    printf("\nThe sum of elements is : %d\n",sum);
    switch(prime(sum)) 
    {
    case 0 : printf("The sum of elements is not prime ");
             break;
    case 1 : printf("The sum of elements is prime");
             break;
    }
             

}