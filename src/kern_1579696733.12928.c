#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(500, 610, "random");
	float *B = create_one_dim_float(560, "random");

	for (int d = 3; d < 610; d++)
	  for (int c = 5; c < 500; c++)
	    for (int b = 5; b < 500; b++)
	      for (int a = 5; a < 500; a++)
	      {
	        
	       B[a]=A[a][b];
	       A[a][b]=B[a]+A[a][b];
	        
	       B[a]=B[a-3]/A[a][b];
	        
	       float var_a=A[a][b]-0.553;
	       float var_b=A[a-1][b-3]-0.361;
	        
	       float var_c=B[a]/0.827;
	       float var_d=B[a-4]-0.489;
	        
	       float var_e=A[a][b]/0.709;
	       float var_f=A[a-5][b-3]-0.741;
	        
	       B[a]=A[a][b]-B[a];
	       B[a]=A[a-2][b]-B[a];
	        
	       float var_g=B[a]+0.412;
	       float var_h=B[a+2]*0.812;
	      }

    return 0;
}