#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(890, 1000, "random");
	float *B = create_one_dim_float(190, "random");
	float **A = create_two_dim_float(80, 750, "random");
	float *D = create_one_dim_float(410, "random");

	for (int d = 0; d < 997; d++)
	  for (int c = 5; c < 188; c++)
	    for (int b = 5; b < 188; b++)
	      for (int a = 5; a < 188; a++)
	      {
	        
	       B[a]=B[a-5]/0.748;
	        
	       B[a]=B[a+2]/0.418;
	        
	       C[a][b]=C[a+2][b]+A[a][b];
	        
	       D[a]=D[a]-0.577+C[a][b]/A[a][b];
	       A[a][b]=D[a-4]*C[a][b];
	        
	       float var_a=C[a][b]/0.128;
	       float var_b=C[a][b+3]/0.222;
	        
	       float var_c=D[a]/0.603;
	      }

    return 0;
}