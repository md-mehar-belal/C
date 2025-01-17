#include<stdio.h>
int main(){
    int x;
    int rev=0,rem;
    printf("enter the number: ");
    scanf("%d",&x);
    int temp=x;
    while(x>0){
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    printf("\nthe reversed number is : %d",rev);
    if(temp==rev){
        printf("\n the number is palindrome\n");

    }
    else{
        printf("\n the number is not a palindrome");
    }
    return 0;
}
