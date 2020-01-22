#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(880, "ones");
	double *B = create_one_dim_double(140, "ones");

	for (int b = 5; b < 135; b++)
	  for (int a = 5; a < 135; a++)
	  {
	    
	     B[a]=B[a-2]/A[a];
	    
	     B[a]=B[a+5]+A[a];
	    
	     B[a]=B[a+4]-0.7;
	    
	     B[a]=B[a]/A[a];
	     A[a]=B[a-5]-0.923;
	    
	     B[a]=A[a]/B[a];
	     A[a]=A[a+2]*B[a];
	    
	     A[a]=A[a]-B[a];
	     A[a]=A[a-1]+B[a];
	  }

    return 0;
}