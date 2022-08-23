#include<stdio.h>
void num(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    num(n);
    printf("\n");
    return 0;
}
void num(int n)
{
    int i=0;
    if(n>=1)
    {
        num(n-1);
        i=n*2;
        printf("%d ",i);
    }
}