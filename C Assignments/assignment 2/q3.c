#include<stdio.h>
int main(){
    int i;
    int j;
    for(i=0;i<5;i++){
        for(j=0;j<=5-i-1;j++){
            printf(" ");

        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
