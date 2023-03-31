#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char** sub_array(char** arr, int start, int end){   

    char** parsed_args;
    int j = 0;

    parsed_args = (char**) malloc ((end - start) * sizeof(char*));

    for (int i = start;  i < end; i ++) // ls -l > test.txt
    {
        parsed_args[j] = malloc(sizeof(arr[i])); //pointer array
        memcpy(parsed_args[j], arr[i], strlen(arr[i]) +1);
        j++;
    }
    printArray(parsed_args, (end - start));
    // how will result val be passed back

    return parsed_args;
}


int create_matrix(char** arr, char*** matrix){ // split_array (0, 4); // split_array (4, 5); // split_array (5, 7); // split_array (8, 10);

    return 0;
}

void printArray(char** arr, int size){
    for(int i = 0; i < size; ++i){
        printf("%s\n", arr[i]);
    }
}