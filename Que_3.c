#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    odd(n);
    printf("\n");
    return 0;
}
void odd(int n)
{
    int i=0;
    if(n>=1)
    {
        odd(n-1);
        i=n*2-1;
        printf("%d ",i);
    }
}