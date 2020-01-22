#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(330, 390, 40, "zeros");
	int *A = create_one_dim_int(760, "zeros");
	int *B = create_one_dim_int(150, "zeros");
	int *C = create_one_dim_int(790, "zeros");

	for (int d = 0; d < 35; d++)
	  for (int c = 0; c < 390; c++)
	    for (int b = 1; b < 147; b++)
	      for (int a = 1; a < 147; a++)
	      {
	        
	       C[a]=C[a-1]-43+D[a][b][c];
	        
	       B[a]=B[a+3]+11-A[a];
	        
	       A[a]=A[a+2]*C[a]-6;
	        
	       B[a]=B[a+2]-26;
	        
	       D[a][b][c]=4;
	       D[a+4][b][c+5]=49;
	        
	       B[a]=A[a]*C[a]/B[a];
	       A[a]=A[a-1]-D[a][b][c];
	      }

    return 0;
}