#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(20, 340, "random");
	double **B = create_two_dim_double(640, 70, "random");
	double *C = create_one_dim_double(370, "random");

	for (int d = 0; d < 66; d++)
	  for (int c = 3; c < 366; c++)
	    for (int b = 3; b < 366; b++)
	      for (int a = 3; a < 366; a++)
	      {
	        
	       C[a]=C[a+2]*0.88;
	        
	       C[a]=C[a+4]+0.752;
	        
	       A[a][b]=B[a][b]/C[a]*A[a][b];
	       B[a][b]=B[a+3][b+4]+C[a];
	      }

    return 0;
}