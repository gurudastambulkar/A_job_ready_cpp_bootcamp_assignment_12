#include<stdio.h>
void square(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    square(x);
    printf("\n");
    return 0;
}
void square(int n)
{
    if(n>=1)
    {
        square(n-1);
        printf("%d ",n*n);
    }
    
}