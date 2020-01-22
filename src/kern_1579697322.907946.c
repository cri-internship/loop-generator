#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(70, "random");
	float *A = create_one_dim_float(70, "random");
	float *D = create_one_dim_float(930, "random");
	float ***C = create_three_dim_float(240, 630, 680, "random");

	for (int d = 3; d < 68; d++)
	  for (int c = 3; c < 68; c++)
	    for (int b = 3; b < 68; b++)
	      for (int a = 3; a < 68; a++)
	      {
	        
	       D[a]=D[a-3]/0.416;
	        
	       B[a]=B[a-3]+0.122;
	        
	       B[a]=B[a-1]/A[a]-C[a][b][c]*D[a];
	        
	       A[a]=A[a+2]-0.58;
	        
	       A[a]=0.761;
	        
	       D[a]=B[a]-C[a][b][c]+A[a];
	      }

    return 0;
}