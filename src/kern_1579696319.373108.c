#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(10, "zeros");
	int ***D = create_three_dim_int(900, 50, 90, "zeros");
	int *B = create_one_dim_int(810, "zeros");
	int **C = create_two_dim_int(890, 330, "zeros");

	for (int d = 0; d < 87; d++)
	  for (int c = 0; c < 48; c++)
	    for (int b = 0; b < 8; b++)
	      for (int a = 0; a < 8; a++)
	      {
	        
	       D[a][b][c]=D[a][b+2][c+3]/A[a]+C[a][b];
	        
	       A[a]=49;
	       A[a+2]=33;
	        
	       int var_a=B[a]+36;
	       int var_b=B[a+4]/15;
	      }

    return 0;
}