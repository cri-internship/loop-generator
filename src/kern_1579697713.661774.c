#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "zeros");
	int **B = create_two_dim_int(250, 320, "zeros");
	int ***C = create_three_dim_int(10, 570, 900, "zeros");

	for (int d = 0; d < 317; d++)
	  for (int c = 4; c < 245; c++)
	    for (int b = 4; b < 245; b++)
	      for (int a = 4; a < 245; a++)
	      {
	        
	       A[a]=A[a-4]-8;
	        
	       B[a][b]=B[a+5][b+2]-A[a]+36;
	        
	       A[a]=A[a+3]*B[a][b];
	        
	       A[a]=A[a+2]*C[a][b][c];
	        
	       B[a][b]=B[a][b]+41;
	       A[a]=B[a+4][b+3]+A[a]/C[a][b][c];
	      }

    return 0;
}