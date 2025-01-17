#include<stdio.h>
int main(){
    int i;
    int j;
    int k;
    int n=5;
    for(i=0;i<5;i++){
        for(j=0;j<2*(5-i)-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("* ");
        }
        printf("\n");
    }
}
