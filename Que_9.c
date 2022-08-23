#include<stdio.h>
int octal(int);
int  main()
{
    int x,y;
    printf("Enter a number ");
    scanf("%d",&x);
    y=octal(x);
    printf("Octal is %d",y);
    printf("\n");
    return 0;
}
int octal(int x)
{
    int a=0,b=0;
    while(x>7)
    {
        a=x%8+a;
        x=x/8;
        if(x>7)
            a=a*10;
    }
    if(x<7)
        a=(a*10)+x;
    while(a!=0)
    {
        b=a%10+b;
        a=a/10;
        if(a!=0)
            b=b*10;
    }
    return b;
}