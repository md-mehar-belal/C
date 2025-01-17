#include<stdio.h>
int fibbo(int a){
    if(a==0 || a==1){
        return a;
    }
    else{
        return fibbo(a-1)+fibbo(a-2);
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d, ", fibbo(i));
    }
    return 0;
}
