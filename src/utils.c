#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int split_array(char** arr, int start, int end){   

    char* parsed_args[];
    int j = 0;

    for (int i = start;  i < end; i ++) // ls -l > test.txt
    {
        parsed_args[j] =  arr[i];

        // needs to alloc memory
        // needs mem copy 
        // malloc

    }
    // how will result val be passed back


    return 0;
    
}


int create_matrix(char** arr, char*** matrix){ // split_array (0, 4); // split_array (4, 5); // split_array (5, 7); // split_array (8, 10);

    return 0;
}
