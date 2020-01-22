#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(350, "ones");
	double *A = create_one_dim_double(920, "ones");
	double *C = create_one_dim_double(150, "ones");

	for (int d = 0; d < 148; d++)
	  for (int c = 0; c < 148; c++)
	    for (int b = 0; b < 148; b++)
	      for (int a = 0; a < 148; a++)
	      {
	        
	       C[a]=B[a]*C[a]-A[a];
	       B[a]=A[a]-C[a];
	        
	       B[a]=A[a]-0.63;
	        
	       B[a]=C[a]-B[a];
	       A[a]=C[a+2]+A[a];
	      }

    return 0;
}