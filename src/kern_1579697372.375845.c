#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(330, 430, "ones");

	for (int d = 4; d < 428; d++)
	  for (int c = 4; c < 327; c++)
	    for (int b = 4; b < 327; b++)
	      for (int a = 4; a < 327; a++)
	      {
	        
	       A[a][b]=A[a+3][b+2]-0.199;
	        
	       A[a][b]=A[a+2][b+1]+0.729;
	        
	       double var_a=A[a][b]/0.761;
	       double var_b=A[a][b-2]/0.989;
	        
	       double var_c=A[a][b]+0.861;
	       double var_d=A[a-3][b-4]-0.741;
	        
	       double var_e=A[a][b]+0.072;
	       double var_f=A[a-4][b-1]+0.369;
	      }

    return 0;
}