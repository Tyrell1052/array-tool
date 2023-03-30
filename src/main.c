#include <stdio.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv){

    char* test_array[] = {"ls","-l", ">","test.txt", "|", "vim"}; // cmd prompt
    
    split_array(test_array, 0,3); // ls -l > test.txt

    char*** matrix;
    create_matrix(test_array, matrix);
    printArray(test_array, 6);

    return 1;   
}

void printArray(char* arr[], int size){
    for(int i = 0; i < size; ++i){
        printf("%s\n", arr[i]);
    }
}