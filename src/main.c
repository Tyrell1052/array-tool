// Author: Tyrell Robbins

#include <stdio.h>
#include <string.h>
#include "utils.h"
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(int argc, char** argv){

    char** parsed_args;
    char* wc[] = {"wc"};
    char* ls[] = {"ls"};
    char* test_array[] = {"ls", "wc"}; // cmd prompt // ls | wc
    
    // parsed_args = sub_array(test_array, 0,3); // ls -l > test.txt
    // printf("\n");
    // char*** matrix;
    // create_matrix(test_array, matrix);
    // printArray(test_array, 6);
    // printf("\n");
    // printArray(parsed_args, 3);

    int     fd[2], nbytes; 
    pid_t   childpid;
    char    readbuffer[80];
        execvp("ls",ls);

    pipe(fd);
    int input = fd[0];
    int output = fd[1];
    
    if((childpid = fork()) == -1) //checking if were able to fork
    {
            perror("fork");
            exit(1);
    }

    if(childpid == 0)//determine behavior parent and child 
    {
            /* Child process closes up input side of pipe */
            close(input);
            dup2(output, STDOUT_FILENO);

            /* Send "string" through the output side of pipe */
            execvp("ls",ls);
            printf("\n");
        //     write(downstream, string, (strlen(string)+1));
            exit(0);
    }
    else
    {
            /* Parent process closes up output side of pipe */
            close(output);
            dup2(input, STDIN_FILENO);

            /* Read in a string from the pipe */
        //     nbytes = read(upstream, readbuffer, sizeof(readbuffer));
        //     printf("Received string: %s", readbuffer);
        execvp("wc",wc);
    }        
        printf("\n");
    return 1;   
}