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
void num(int x)
{
    if(x>=1)
    {
        printf("%d ",x);
        num(x-1);
    }
}