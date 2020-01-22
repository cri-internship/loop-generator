#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(230, 150, "random");
	double *A = create_one_dim_double(550, "random");
	double *B = create_one_dim_double(320, "random");
	double *C = create_one_dim_double(870, "random");

	for (int d = 5; d < 547; d++)
	  for (int c = 5; c < 547; c++)
	    for (int b = 5; b < 547; b++)
	      for (int a = 5; a < 547; a++)
	      {
	        
	       C[a]=C[a-5]*0.544;
	        
	       A[a]=0.498;
	       A[a+3]=0.517;
	        
	       B[a]=C[a]*A[a]+0.56;
	       C[a]=C[a+2]+A[a];
	      }

    return 0;
}