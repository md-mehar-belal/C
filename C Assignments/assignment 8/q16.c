#include<stdio.h>
double calculatesum(int n){
    double sum=0;
    int i;
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    return sum;
}
int main(){
    int n;
    double result;
    printf("enter the number ");
    scanf("%d",&n);
    result=calculatesum(n);
    printf("\n the result is %.2lf",result);
    return 0;
}
