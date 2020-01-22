#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(440, "random");
	double *A = create_one_dim_double(590, "random");

	for (int c = 5; c < 440; c++)
	  for (int b = 5; b < 440; b++)
	    for (int a = 5; a < 440; a++)
	    {
	      
	      A[a]=A[a-2]*B[a];
	      
	      A[a]=A[a-5]+B[a];
	      
	      A[a]=B[a]*A[a];
	      B[a]=B[a-3]+A[a];
	    }

    return 0;
}