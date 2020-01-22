#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(180, "ones");
	float ***B = create_three_dim_float(260, 180, 790, "ones");
	float *C = create_one_dim_float(970, "ones");

	for (int d = 2; d < 790; d++)
	  for (int c = 2; c < 180; c++)
	    for (int b = 4; b < 260; b++)
	      for (int a = 4; a < 260; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-2][c-2]-0.846;
	        
	       A[a]=C[a]-A[a]+B[a][b][c];
	       C[a]=A[a]/B[a][b][c];
	        
	       B[a][b][c]=C[a]+A[a]-B[a][b][c];
	       C[a]=C[a-4]/0.114-A[a];
	      }

    return 0;
}