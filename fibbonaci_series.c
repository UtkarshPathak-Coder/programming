#include<stdio.h>
int fib(int);
void main()
{
    int n,i;
    printf("Enter the value for n\n");
    scanf("%d",&n);
    printf("The fibbonaci series for n=%d is \n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
}
int fib(int n)
{
    if(n==0)
    return 0;

    else if (n==1)
    return 1;

    else return (fib(n-1)+fib(n-2));
}
