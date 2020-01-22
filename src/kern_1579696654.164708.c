#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(750, 420, "zeros");
	double *A = create_one_dim_double(50, "zeros");

	for (int d = 3; d < 415; d++)
	  for (int c = 0; c < 48; c++)
	    for (int b = 0; b < 48; b++)
	      for (int a = 0; a < 48; a++)
	      {
	        
	       B[a][b]=B[a][b-3]*0.442;
	        
	       B[a][b]=B[a+4][b+5]-0.28;
	        
	       A[a]=A[a+2]*0.073;
	        
	       A[a]=A[a+1]/B[a][b];
	        
	       A[a]=0.781;
	        
	       double var_a=A[a]/0.383;
	       double var_b=A[a]+0.584;
	      }

    return 0;
}