#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(910, "zeros");
	int ***D = create_three_dim_int(280, 790, 500, "zeros");
	int *C = create_one_dim_int(860, "zeros");
	int ***A = create_three_dim_int(720, 880, 70, "zeros");

	for (int d = 5; d < 65; d++)
	  for (int c = 5; c < 790; c++)
	    for (int b = 5; b < 280; b++)
	      for (int a = 5; a < 280; a++)
	      {
	        
	       C[a]=C[a-5]*36;
	        
	       C[a]=C[a+3]*41;
	        
	       A[a][b][c]=A[a+3][b+3][c+5]*D[a][b][c]-C[a];
	        
	       D[a][b][c]=29;
	       D[a-5][b][c-5]=48;
	        
	       C[a]=A[a][b][c]/28+B[a]-D[a][b][c];
	       B[a]=A[a][b+1][c+4]/B[a]+C[a];
	        
	       int var_a=D[a][b][c]/4;
	       int var_b=D[a-1][b-5][c]-1;
	      }

    return 0;
}