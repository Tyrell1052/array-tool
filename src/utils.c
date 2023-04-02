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

int pipe_helper(int argc, char* argv[]){

    int pipefd[2]; 
    pid_t cpid;
    char* buf;

    if(argc != 2){
        fprintf(stderr, "usage: <string>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if(pipe(pipefd == -1)){
        perror("PIPE");
        exit(EXIT_FAILURE);
    }

    cpid = fork();
    if(cpid == -1){
        perror("fork");
        exit(EXIT_FAILURE);   
    }

    if(cpid == 0){
        close(pipefd[1]);
        while(read(pipefd[0], &buf, 1) > 0){
            write(STDOUT_FILENO, &buf, 1){
                write(STDOUT_FILENO, "\n", 1);
                close(pipefd[0]);
                _Exit(EXIT_SUCCESS);
            }
        }
    } else {
        close(pipefd[0]);
        write(pipefd[1], argv[1], strlen(argv[1]));
        close(pipefd[1]);
        write(NULL);
        exit(EXIT_SUCCESS);
    }
    return 0; 
}


void printArray(char** arr, int size){
    for(int i = 0; i < size; ++i){
        printf("%s\n", arr[i]);
    }
}