#include<stdio.h>
void ToH(int,char,char,char);
int main()
{   
    int n;
    scanf("%d",&n);
    ToH(n,'A','C','B');
    return 0;
}
void ToH(int n,char source,char dest,char aux)
{
    if(n==0)
        return ;
    ToH(n-1,source,aux,dest);
    printf("move disk %d from %c to %c\n",n,source,dest);
    ToH(n-1,aux,dest,source);
}
 