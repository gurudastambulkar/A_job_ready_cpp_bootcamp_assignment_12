#include<stdio.h>
int rev(int);
int main()
{
    int x=0,y=0;
    printf("Enter a number ");
    scanf("%d",&x);
    y=rev(x);
    printf("Reverse is %d",y);
    printf("\n");
    return 0;
}
int rev(int x)
{
    int y=0;
    while(x!=0)
    {
        y=y+x%10;
        x=x/10;
        if(x!=0)
            y=y*10;
    }
    return y;
}

