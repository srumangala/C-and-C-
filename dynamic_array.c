#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;
    
    
    printf("Enter the number of integers to allocate\n");
    scanf("%d", &n);
    
    // Dynamically allocate memory for the array of integers
    
    arr = (int *)malloc(n*sizeof(int)); //Typecasting
    
    if (arr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers\n",n);
    for(int i=0 ; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("The dynamic array is : ");
    
    for(int i=0 ; i<n;i++){
     printf(" %d ", arr[i]);
    }
    free (arr);
    return 0;
}