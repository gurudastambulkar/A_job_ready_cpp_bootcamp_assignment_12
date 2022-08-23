#include<stdio.h>
void num(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    num(x);
    printf("\n");
    return 0;
}
void num(int n)
{
    int i=0;
    if(n>=1)
    {
        i=n*2;
        printf("%d ",i);
        num(n-1);
    }
}