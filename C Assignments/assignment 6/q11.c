#include<stdio.h>
int main(){
    int a,r,r_sum=0;
    printf("enter the number");
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        r_sum=r_sum*10+r;
        a=a/10;
    }
    printf("the reverse is %d",r_sum);
    return 0;
}
