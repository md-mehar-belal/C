#include<stdio.h>
#include<conio.h>
int main(){
    int x,temp,rev=0,digit,sum_of_digits=0;
    printf("enter the numbers to be checked");
    scanf("%d",&x);
    temp=x;
    while(temp>0){
        sum_of_digits=sum_of_digits+temp%10;
        temp=temp/10;
    }
    temp=sum_of_digits;
    printf("the sum of digits is %d",temp);

    while(temp>0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    printf("\nthe reverse of digits:%d",rev);

    if ( rev * sum_of_digits == x)
    {
        printf (" \n %d is a Magic Number. ", x);
    }
    else
    {
        printf ("\n%d is not a Magic Number. ", x);
    }
    return 0;



}
