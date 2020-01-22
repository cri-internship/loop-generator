#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(450, 410, "ones");
	double *A = create_one_dim_double(560, "ones");

	for (int d = 4; d < 406; d++)
	  for (int c = 3; c < 448; c++)
	    for (int b = 3; b < 448; b++)
	      for (int a = 3; a < 448; a++)
	      {
	        
	       B[a][b]=B[a-1][b-2]/A[a];
	        
	       B[a][b]=B[a+2][b+4]*0.929;
	        
	       double var_a=B[a][b]*0.194;
	      }

    return 0;
}