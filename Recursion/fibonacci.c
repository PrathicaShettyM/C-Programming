#include<stdio.h>
int fibo(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int res = fibo(n);
    printf("result: %d", res);
    return 0;
}