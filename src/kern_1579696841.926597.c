#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(240, "ones");
	float **D = create_two_dim_float(370, 450, "ones");
	float **A = create_two_dim_float(460, 770, "ones");
	float ***C = create_three_dim_float(530, 990, 20, "ones");

	for (int d = 0; d < 16; d++)
	  for (int c = 0; c < 988; c++)
	    for (int b = 3; b < 237; b++)
	      for (int a = 3; a < 237; a++)
	      {
	        
	       B[a]=B[a-3]*D[a][b]-A[a][b]+0.968;
	        
	       C[a][b][c]=C[a+4][b+2][c+4]+0.253;
	        
	       B[a]=B[a+3]*A[a][b];
	        
	       C[a][b][c]=C[a+3][b][c]-0.902;
	      }

    return 0;
}