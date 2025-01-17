#include<stdio.h>
int main(){
    int a;
    int temp=a;
    int rem,sum=0;
    printf("enter this number:");
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    printf("the sum is %d",sum);
    return 0;
}
