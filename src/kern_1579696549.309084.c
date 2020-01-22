#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(750, "zeros");
	double **A = create_two_dim_double(680, 650, "zeros");
	double **C = create_two_dim_double(80, 820, "zeros");

	for (int d = 0; d < 820; d++)
	  for (int c = 3; c < 75; c++)
	    for (int b = 3; b < 75; b++)
	      for (int a = 3; a < 75; a++)
	      {
	        
	       B[a]=B[a-3]/C[a][b];
	        
	       C[a][b]=0.822;
	       C[a+5][b]=0.732;
	        
	       double var_a=B[a]+0.519;
	      }

    return 0;
}