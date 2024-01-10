#include<stdio.h>

int sumOfN(int n){
    if(n == 1) return 1;
    return n+sumOfN(n-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int res = sumOfN(n);
    printf("The sum is: %d", res);
    return 0;
}