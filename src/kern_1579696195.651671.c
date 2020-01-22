#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(340, 840, "ones");
	double **B = create_two_dim_double(730, 490, "ones");

	for (int d = 5; d < 487; d++)
	  for (int c = 5; c < 336; c++)
	    for (int b = 5; b < 336; b++)
	      for (int a = 5; a < 336; a++)
	      {
	        
	       A[a][b]=A[a-5][b-5]/0.754;
	        
	       A[a][b]=A[a-4][b]+0.833;
	        
	       A[a][b]=A[a+4][b+2]+0.799;
	        
	       double var_a=A[a][b]-0.154;
	       double var_b=A[a][b+1]+0.71;
	        
	       A[a][b]=B[a][b]-A[a][b];
	       B[a][b]=B[a+4][b+3]*A[a][b];
	      }

    return 0;
}