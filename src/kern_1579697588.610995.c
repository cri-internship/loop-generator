#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(60, 630, "random");
	double *A = create_one_dim_double(670, "random");

	for (int d = 4; d < 626; d++)
	  for (int c = 5; c < 59; c++)
	    for (int b = 5; b < 59; b++)
	      for (int a = 5; a < 59; a++)
	      {
	        
	       A[a]=A[a-5]*B[a][b];
	        
	       B[a][b]=B[a-5][b-3]*0.424;
	        
	       B[a][b]=B[a-1][b-4]-0.582;
	        
	       A[a]=A[a-1]/0.495;
	        
	       B[a][b]=B[a+1][b+4]/0.222;
	        
	       double var_a=A[a]+0.536;
	       double var_b=A[a]*0.71;
	      }

    return 0;
}