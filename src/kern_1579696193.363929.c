#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(870, 720, "zeros");
	float ***C = create_three_dim_float(260, 950, 480, "zeros");
	float *B = create_one_dim_float(120, "zeros");

	for (int d = 0; d < 480; d++)
	  for (int c = 0; c < 716; c++)
	    for (int b = 0; b < 115; b++)
	      for (int a = 0; a < 115; a++)
	      {
	        
	       A[a][b]=A[a+2][b+3]-B[a]+C[a][b][c];
	        
	       B[a]=B[a+5]+A[a][b]-A[a][b];
	        
	       B[a]=A[a][b];
	        
	       A[a][b]=B[a]*C[a][b][c];
	        
	       C[a][b][c]=0.123;
	       C[a+3][b+1][c]=0.488;
	      }

    return 0;
}