#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(850, "ones");
	double *A = create_one_dim_double(540, "ones");

	for (int b = 5; b < 537; b++)
	  for (int a = 5; a < 537; a++)
	  {
	    
	     A[a]=A[a-2]+0.502;
	    
	     A[a]=A[a+2]-0.275;
	    
	     B[a]=A[a];
	     B[a-5]=0.294;
	    
	     double var_a=A[a]-0.624;
	     double var_b=A[a+3]-0.755;
	  }

    return 0;
}