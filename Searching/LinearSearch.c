#include<stdio.h>
int main(){
    int n;
    int arr[5];
    printf("Enter the 5 elements of the array: ");

    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched for: ");
    scanf("%d", &n);

    for(int i = 0; i < 5; i++){
        if(n == arr[i]){
        printf("The element %d is found at the position %d", n, i+1);
        }
    }

    return 0;
}