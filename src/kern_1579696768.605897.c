#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(590, 600, "zeros");
	double *C = create_one_dim_double(380, "zeros");
	double ***D = create_three_dim_double(170, 460, 190, "zeros");
	double **A = create_two_dim_double(100, 410, "zeros");

	for (int d = 4; d < 407; d++)
	  for (int c = 1; c < 99; c++)
	    for (int b = 1; b < 99; b++)
	      for (int a = 1; a < 99; a++)
	      {
	        
	       A[a][b]=0.297;
	       A[a+1][b+3]=0.91;
	        
	       double var_a=A[a][b]/0.096;
	       double var_b=A[a-1][b-4]*0.364;
	      }

    return 0;
}