#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>



int** read_board_from_file(char* filename){
    FILE *fp = NULL;
    int** board = NULL;

   




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

int ROW_SIZE = 9;
int COL_SIZE = ROW_SIZE;
int NUM_OF_SUBGRIDS = ROW_SIZE;
int NUM_OF_THREADS = ROW_SIZE+COL_SIZE+NUM_OF_SUBGRIDS;

int** sudoku_board = (int**)malloc(sizeof(int*)*ROW_SIZE);
for(int row = 0; row < ROW_SIZE; row++){
	sudoku_board[row] = (int*)malloc(sizeof(int)*COL_SIZE);
} 
  int disp[9][9];
  int i, j;
   for(i=0; i<9; i++) {
      for(j=0;j<9;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }

  printf("Two Dimensional array elements:\n");
   for(i=0; i<9; i++) {
      for(j=0;j<9;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }


    return board;
}

int is_board_valid(){

  int ROW_SIZE = 9;
int COL_SIZE = ROW_SIZE;
int NUM_OF_SUBGRIDS = ROW_SIZE;
int NUM_OF_THREADS = ROW_SIZE+COL_SIZE+NUM_OF_SUBGRIDS;

  typedef struct {
    int id;
    int starting_row;
    int starting_col;
    int ending_row;
    int ending_col;
} param_struct;

  int thread_t* tid = (thread_t*)malloc(sizeof(int)*NUM_OF_THREADS);
param_struct* params = (param_struct*)malloc(sizeof(param_struct)*NUM_OF_THREADS); 
params[0].id = 0; // id of first thread
params[0].starting_row = 0;
params[0].starting_col = 0;
params[0].starting_row = 3;
params[0].starting_row = 3;
/* Now create the thread passing it params[0] as a parameter */
pthread_create(&(tid[0]), &attr, validate, &(params[0]));
  
  
}


int main(void) {
  read_board_from_file("dog");
}
  
