#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(250, "ones");
	double *D = create_one_dim_double(800, "ones");
	double *C = create_one_dim_double(190, "ones");
	double **B = create_two_dim_double(990, 320, "ones");

	for (int d = 0; d < 319; d++)
	  for (int c = 0; c < 250; c++)
	    for (int b = 0; b < 250; b++)
	      for (int a = 0; a < 250; a++)
	      {
	        
	       D[a]=D[a+3]*A[a]+C[a]/B[a][b];
	        
	       B[a][b]=B[a+4][b+1]/D[a];
	        
	       A[a]=0.918;
	       A[a]=0.364;
	      }

    return 0;
}