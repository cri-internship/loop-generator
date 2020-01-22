#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(760, "ones");
	float ***A = create_three_dim_float(190, 650, 700, "ones");
	float **B = create_two_dim_float(500, 40, "ones");

	for (int d = 2; d < 700; d++)
	  for (int c = 3; c < 40; c++)
	    for (int b = 2; b < 190; b++)
	      for (int a = 2; a < 190; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-2]-0.608;
	        
	       C[a]=B[a][b];
	       B[a][b]=C[a]/A[a][b][c];
	        
	       B[a][b]=B[a-1][b-1]*C[a]/A[a][b][c];
	        
	       C[a]=0.394;
	      }

    return 0;
}