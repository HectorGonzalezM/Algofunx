#include <stdio.h>

int main(){
    int myArray[3]={5, 2, 3};
    int i = 0;
    
    void printArray(int myArray[3], int arrayLength){
        while(i < 3){        
            printf("%d", myArray[i]);
            if(i < 2){
                printf(",");
            } 
            i++;
        }
    }
    printArray(myArray, 3);
    return 0;
}
