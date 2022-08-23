#include<stdio.h>
void Nnum(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    Nnum(n);
    printf("\n");
    return 0;
}
void Nnum(int x)
{
    if(x>0)
    {
        Nnum(x-1);
        printf("%d",x);
    }    
}