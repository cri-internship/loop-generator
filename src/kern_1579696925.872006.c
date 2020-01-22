#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(130, "random");
	double *B = create_one_dim_double(680, "random");

	for (int b = 5; b < 125; b++)
	  for (int a = 5; a < 125; a++)
	  {
	    
	     A[a]=A[a-5]+B[a];
	    
	     B[a]=B[a-5]+0.877;
	    
	     A[a]=0.652;
	    
	     A[a]=B[a]+A[a];
	     B[a]=B[a+2]+A[a];
	    
	     double var_a=A[a]*0.891;
	  }

    return 0;
}