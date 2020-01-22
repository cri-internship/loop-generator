#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(940, 200, "random");
	double **B = create_two_dim_double(960, 200, "random");
	double **C = create_two_dim_double(790, 780, "random");

	for (int d = 4; d < 196; d++)
	  for (int c = 4; c < 785; c++)
	    for (int b = 4; b < 785; b++)
	      for (int a = 4; a < 785; a++)
	      {
	        
	       C[a][b]=C[a-4][b-4]/B[a][b]-0.231;
	        
	       C[a][b]=C[a-4][b-3]*0.327;
	        
	       B[a][b]=B[a+5][b+4]*0.682;
	        
	       A[a][b]=C[a][b]*B[a][b];
	       B[a][b]=C[a+5][b+2]/A[a][b]+B[a][b];
	        
	       double var_a=B[a][b]/0.188;
	       double var_b=B[a][b+1]-0.802;
	      }

    return 0;
}