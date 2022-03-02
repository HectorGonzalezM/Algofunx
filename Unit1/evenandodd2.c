#include <stdio.h>

int main (){
    int num1;
    printf("Enter a number to know if it's an even or an odd number: ");
    scanf("%d", &num1);
    int residue = num1%2;

    if(residue == 0){
        printf("%d is an even number\n", num1);
    }else{
        printf("%d is an odd number\n", num1);
    }

    return 0;
}
