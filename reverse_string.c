
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str){
    int length = strlen(str);
    for (int i=0; i< length/2; i++){
        char temp = str[i];
        str[i]= str[length-1-i];
        str[length-1-i]=temp;
    }
}

int main()
{
    char input[100];
    
    
    printf("Enter the string \n");
    scanf("%s", input);
    
    reverseString(input);
    printf("String backwards = %s\n",input);

    return 0;
}
