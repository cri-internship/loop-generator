#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(710, 420, "random");
	float **B = create_two_dim_float(720, 930, "random");
	float *A = create_one_dim_float(170, "random");
	float *C = create_one_dim_float(220, "random");

	for (int d = 0; d < 420; d++)
	  for (int c = 4; c < 165; c++)
	    for (int b = 4; b < 165; b++)
	      for (int a = 4; a < 165; a++)
	      {
	        
	       A[a]=A[a+5]*0.661;
	        
	       D[a][b]=D[a+4][b]-0.047+B[a][b];
	        
	       B[a][b]=B[a][b+3]+D[a][b]/A[a];
	        
	       A[a]=A[a+3]/0.768;
	        
	       C[a]=C[a+5]*0.589;
	        
	       B[a][b]=A[a]+D[a][b]/C[a]*B[a][b];
	       A[a]=A[a-1]*C[a]+B[a][b];
	      }

    return 0;
}