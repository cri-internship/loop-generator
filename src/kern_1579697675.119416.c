#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(710, 270, "zeros");
	double *C = create_one_dim_double(250, "zeros");
	double *A = create_one_dim_double(500, "zeros");

	for (int d = 2; d < 270; d++)
	  for (int c = 5; c < 250; c++)
	    for (int b = 5; b < 250; b++)
	      for (int a = 5; a < 250; a++)
	      {
	        
	       A[a]=A[a-5]*0.11;
	        
	       B[a][b]=B[a-5][b-2]+0.941;
	        
	       A[a]=A[a+3]*B[a][b]-0.483;
	        
	       C[a]=A[a]-A[a];
	       C[a-3]=A[a];
	        
	       double var_a=A[a]/0.974;
	       double var_b=A[a+1]+0.302;
	      }

    return 0;
}