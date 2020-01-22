#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(860, "zeros");
	double *A = create_one_dim_double(810, "zeros");
	double *C = create_one_dim_double(470, "zeros");

	for (int b = 5; b < 470; b++)
	  for (int a = 5; a < 470; a++)
	  {
	    
	     A[a]=A[a-5]*0.506;
	    
	     A[a]=A[a+1]+0.084;
	    
	     A[a]=C[a]/A[a]-B[a];
	     C[a]=C[a]/A[a];
	  }

    return 0;
}