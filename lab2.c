#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include "lab2.h"


int** read_board_from_file(char* filename){
    FILE *fp = NULL;
    int** board = NULL;

   #include <stdio.h>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>




/**
 * Defines the structure that will hold the parameter data
 * provided to the worker threads
*/
typedef struct {
    int id;
    int starting_row;
    int starting_col;
    int ending_row;
    int ending_col;
} param_struct;
int** Sudoku(){
int ROW_SIZE = 9;
int COL_SIZE = ROW_SIZE;
int NUM_OF_SUBGRIDS = ROW_SIZE;
int NUM_OF_THREADS = ROW_SIZE+COL_SIZE+NUM_OF_SUBGRIDS;

int** sudoku_board = (int**)malloc(sizeof(int*)*ROW_SIZE);
for(int row = 0; row < ROW_SIZE; row++){
	sudoku_board[row] = (int*)malloc(sizeof(int)*COL_SIZE);
} 
  }


    return board;
}


int is_board_valid(){
    pthread_t* tid;  /* the thread identifiers */
    pthread_attr_t attr;
    param_struct* parameter;
    
    // replace this comment with your code
    
}
