#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "zeros");
	double *B = create_one_dim_double(980, "zeros");
	double *C = create_one_dim_double(870, "zeros");

	for (int c = 4; c < 590; c++)
	  for (int b = 4; b < 590; b++)
	    for (int a = 4; a < 590; a++)
	    {
	      
	      B[a]=A[a]+C[a];
	      A[a]=B[a]+0.166;
	      
	      C[a]=C[a-4]/B[a]+0.194;
	      
	      C[a]=A[a]/B[a];
	      C[a]=A[a-4]+B[a];
	    }

    return 0;
}