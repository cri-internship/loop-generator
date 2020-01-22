#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(880, "random");
	double **C = create_two_dim_double(350, 200, "random");
	double *B = create_one_dim_double(770, "random");
	double **D = create_two_dim_double(630, 320, "random");

	for (int d = 0; d < 197; d++)
	  for (int c = 0; c < 349; c++)
	    for (int b = 0; b < 349; b++)
	      for (int a = 0; a < 349; a++)
	      {
	        
	       B[a]=0.994;
	       float  var_a=B[a]*0.456;
	        
	       A[a]=A[a+3]*0.113;
	        
	       B[a]=B[a+5]/0.107;
	        
	       C[a][b]=C[a+1][b+3]/0.481;
	        
	       B[a]=B[a+4]/A[a]+C[a][b];
	      }

    return 0;
}