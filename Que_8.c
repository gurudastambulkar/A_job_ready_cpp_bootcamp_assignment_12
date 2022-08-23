#include<stdio.h>
void binary(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    binary(x);
    printf("\n");
    return 0;
}
void binary(int x)
{
    if(x==1)
    printf("1");
    else{
        binary(x/2);
        printf("%d",x%2);
    }
}