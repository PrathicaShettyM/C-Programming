#include<stdio.h>
int exponent(int a, int b){
    if(b==0) return 1;
    return a*exponent(a,b-1);
}
int main(){
    int a,n;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter its power: ");
    scanf("%d", &n);
    int res = exponent(a,n);
    printf("%d", res);

    return 0;
}