#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "zeros");
	float *B = create_one_dim_float(750, "zeros");
	float ***C = create_three_dim_float(370, 520, 700, "zeros");

	for (int d = 1; d < 699; d++)
	  for (int c = 3; c < 520; c++)
	    for (int b = 4; b < 370; b++)
	      for (int a = 4; a < 370; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-3][c-1]/0.937;
	        
	       B[a]=B[a-3]/A[a];
	        
	       A[a]=A[a+1]/0.204;
	        
	       B[a]=B[a+2]+0.23;
	        
	       A[a]=0.205;
	        
	       B[a]=C[a][b][c]*B[a]-A[a];
	       C[a][b][c]=C[a][b][c+1]+B[a];
	      }

    return 0;
}