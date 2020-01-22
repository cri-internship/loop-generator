#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(590, 650, "ones");
	double **B = create_two_dim_double(530, 50, "ones");

	for (int d = 5; d < 49; d++)
	  for (int c = 3; c < 530; c++)
	    for (int b = 3; b < 530; b++)
	      for (int a = 3; a < 530; a++)
	      {
	        
	       A[a][b]=A[a-3][b-5]-B[a][b];
	        
	       double var_a=B[a][b]*0.912;
	       double var_b=B[a][b+1]/0.375;
	      }

    return 0;
}