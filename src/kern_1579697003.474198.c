#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(830, "random");
	double *A = create_one_dim_double(710, "random");

	for (int b = 0; b < 708; b++)
	  for (int a = 0; a < 708; a++)
	  {
	    
	     A[a]=A[a+1]*B[a];
	    
	     B[a]=B[a]/A[a];
	     B[a]=A[a];
	    
	     A[a]=0.941;
	  }

    return 0;
}