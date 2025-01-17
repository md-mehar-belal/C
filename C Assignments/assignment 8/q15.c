#include<stdio.h>
int lcm(int x, int y)
{
    int a;
    a = (x > y) ? x : y; // a is greater number
    while (1)
    {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}
int main()
{
    int a,b;
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    int result=lcm(a,b);
    int gcd=(a*b)/result;
    printf("\nthe lcm is:%d",result);
    printf("\nthe gcd is :%d",gcd);
    return 0;
}
