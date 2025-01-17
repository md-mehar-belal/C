#include<stdio.h>
#include<math.h>

double calculateSeries(int n){
    double sum;
    int i,sign=1;
    for(i=1;i<=n;i++){
        sum+=sign*(1.0/i);
        sign=-sign;
    }
    return sum;
}
int main(){
    int n;
    double result;
    printf("enter the numberL: ");
    scanf("%d",&n);
    result=calculateSeries(n);
    printf("\nthe result is :%.2lf",result);
    return 0;
}
