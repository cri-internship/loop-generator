#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(520, "random");
	double *C = create_one_dim_double(650, "random");
	double *A = create_one_dim_double(910, "random");

	for (int d = 5; d < 515; d++)
	  for (int c = 5; c < 515; c++)
	    for (int b = 5; b < 515; b++)
	      for (int a = 5; a < 515; a++)
	      {
	        
	       C[a]=C[a-1]/0.924;
	        
	       B[a]=B[a+5]+0.489;
	        
	       B[a]=A[a]+B[a]/C[a];
	       A[a]=A[a+2]/C[a];
	        
	       C[a]=B[a]-A[a]+C[a];
	       A[a]=B[a-5]+C[a];
	      }

    return 0;
}