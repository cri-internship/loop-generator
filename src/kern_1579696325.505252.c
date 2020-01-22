#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(370, "zeros");
	double *A = create_one_dim_double(320, "zeros");
	double *C = create_one_dim_double(930, "zeros");

	for (int d = 1; d < 925; d++)
	  for (int c = 1; c < 925; c++)
	    for (int b = 1; b < 925; b++)
	      for (int a = 1; a < 925; a++)
	      {
	        
	       C[a]=C[a+5]+0.448;
	        
	       C[a]=C[a+1]-B[a]+A[a];
	        
	       double var_a=C[a]+0.774;
	       double var_b=C[a-1]+0.589;
	      }

    return 0;
}