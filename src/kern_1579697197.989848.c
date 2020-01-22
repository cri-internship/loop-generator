#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(770, "random");
	float **C = create_two_dim_float(640, 710, "random");
	float **B = create_two_dim_float(190, 420, "random");

	for (int d = 2; d < 420; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       B[a][b]=B[a-4][b-2]*C[a][b]+A[a];
	        
	       A[a]=A[a-3]+0.17;
	        
	       C[a][b]=C[a-5][b-2]*0.952;
	        
	       A[a]=A[a+3]+0.1;
	        
	       C[a][b]=C[a][b]+A[a];
	       A[a]=C[a-5][b-1]/B[a][b]*A[a];
	        
	       float var_a=C[a][b]-0.738;
	       float var_b=C[a+1][b+4]/0.615;
	      }

    return 0;
}