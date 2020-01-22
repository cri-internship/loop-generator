#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(690, "random");
	double *A = create_one_dim_double(330, "random");

	for (int b = 5; b < 325; b++)
	  for (int a = 5; a < 325; a++)
	  {
	    
	     B[a]=B[a-3]/0.497;
	    
	     A[a]=A[a-5]*0.785;
	    
	     A[a]=B[a];
	    
	     A[a]=B[a]*A[a];
	     B[a]=B[a-5]/A[a];
	  }

    return 0;
}