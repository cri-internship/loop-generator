#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(920, "zeros");
	double *A = create_one_dim_double(880, "zeros");

	for (int c = 5; c < 879; c++)
	  for (int b = 5; b < 879; b++)
	    for (int a = 5; a < 879; a++)
	    {
	      
	      A[a]=A[a-1]*0.764;
	      
	      B[a]=B[a-2]*0.391;
	      
	      A[a]=B[a];
	      
	      B[a]=A[a]-0.804;
	      A[a]=A[a-5]-B[a];
	      
	      double var_a=B[a]-0.628;
	      double var_b=B[a+5]-0.572;
	    }

    return 0;
}