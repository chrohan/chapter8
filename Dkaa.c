#include<stdio.h>
int factorial(int);
int main()
{
    int a,b;
    printf("enter any number\n");
    scanf("%d",&a);
    b = factorial(a);
    printf("%d",b);
    return 0;
}
int factorial (int x)
{
    int i,j = 1;
    for(i = 1; i <= x; i++)
    {
        j= j*i;
        
    }
    return(j);
}