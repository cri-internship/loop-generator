#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(810, 690, "random");
	int ***B = create_three_dim_int(70, 590, 660, "random");
	int *C = create_one_dim_int(870, "random");

	for (int d = 5; d < 660; d++)
	  for (int c = 5; c < 590; c++)
	    for (int b = 4; b < 70; b++)
	      for (int a = 4; a < 70; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b][c-3]+25;
	        
	       B[a][b][c]=B[a-4][b][c-5]+7;
	        
	       A[a][b]=A[a][b-3]-9;
	        
	       A[a][b]=A[a][b+5]*25;
	        
	       A[a][b]=A[a+2][b+1]*B[a][b][c];
	        
	       A[a][b]=A[a+4][b+3]-0;
	        
	       A[a][b]=A[a][b]-11;
	       C[a]=A[a][b-5]-C[a];
	      }

    return 0;
}