#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(220, "zeros");
	double *A = create_one_dim_double(310, "zeros");

	for (int d = 5; d < 215; d++)
	  for (int c = 5; c < 215; c++)
	    for (int b = 5; b < 215; b++)
	      for (int a = 5; a < 215; a++)
	      {
	        
	       B[a]=B[a-5]*0.801;
	        
	       B[a]=A[a];
	        
	       double var_a=A[a]-0.747;
	       double var_b=A[a+1]+0.596;
	        
	       double var_c=B[a]+0.386;
	       double var_d=B[a+5]+0.463;
	      }

    return 0;
}