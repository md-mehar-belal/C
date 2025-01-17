#include<stdio.h>
#include<math.h>

double CalculateSeries(int n){
    double sum=0.0;
    int i;
    for(i=1;i<=n;i++){
        double term=(double)i/pow(i,i);
        sum+=term;
    }
    return sum;

}
int main(){
    int n;
    double result;
    printf("enter the value of n:");
    scanf("%d",&n);
    result=CalculateSeries(n);
    printf("the result is %.2lf",result);
    return 0;



}

