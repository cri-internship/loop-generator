#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(900, 620, "ones");
	double **C = create_two_dim_double(670, 460, "ones");
	double *A = create_one_dim_double(50, "ones");

	for (int d = 0; d < 460; d++)
	  for (int c = 1; c < 670; c++)
	    for (int b = 1; b < 670; b++)
	      for (int a = 1; a < 670; a++)
	      {
	        
	       C[a][b]=C[a-1][b]*A[a]+B[a][b];
	      }

    return 0;
}