#include<stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count>2){
        printf("it is not prime");
    }
    else{
        printf("it is prime");
    }


}
