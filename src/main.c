#include <stdio.h>
#include <string.h>
#include "utils.h"

int main(int argc, char** argv){

    char** parsed_args;

    char* test_array[] = {"ls","-l", ">","test.txt", "|", "vim"}; // cmd prompt
    
    parsed_args = sub_array(test_array, 0,3); // ls -l > test.txt

    printf("\n");

    char*** matrix;
    create_matrix(test_array, matrix);
    printArray(test_array, 6);
    printf("\n");
    printArray(parsed_args, 3);


    return 1;   
}
