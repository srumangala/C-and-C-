#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}

int main(){
    int n1,n2;
    
    printf("Enter two integers to swap : \n");
    scanf("%d %d", &n1, &n2);
    
    printf("Before Swapping  a = %d b = %d \n", n1, n2);
    swap(&n1,&n2);
    printf("After Swapping  a = %d b = %d \n", n1, n2);
    
    return 0;
}