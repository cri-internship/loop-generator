#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(960, 10, "ones");
	float *B = create_one_dim_float(600, "ones");

	for (int d = 4; d < 10; d++)
	  for (int c = 5; c < 595; c++)
	    for (int b = 5; b < 595; b++)
	      for (int a = 5; a < 595; a++)
	      {
	        
	       B[a]=B[a-2]*A[a][b];
	        
	       A[a][b]=A[a-1][b-3]+B[a];
	        
	       A[a][b]=0.344;
	        
	       B[a]=B[a]-A[a][b];
	       A[a][b]=B[a+5]-A[a][b];
	        
	       float var_a=A[a][b]*0.336;
	       float var_b=A[a][b-4]/0.259;
	      }

    return 0;
}