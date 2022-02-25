#include<stdio.h>
int fact(int);
int main()
{
    int num,facto;
    printf("Enter the number : ");
    scanf("%d",&num);
    facto=fact(num);
    printf("%d",facto);
    return 0;
}
int fact(int num)
{
    if(num==1)
        return 1;
    else 
        return fact(num-1)*num;
}