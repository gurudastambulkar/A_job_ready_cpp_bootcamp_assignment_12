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
void odd(int x)
{
    int i=0;
    if(x>=1)
    {
        i=x*2-1;
        printf("%d ",i);
        odd(x-1);
    }
    
}