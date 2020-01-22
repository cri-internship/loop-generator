#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(370, 940, "ones");
	double *B = create_one_dim_double(50, "ones");

	for (int d = 0; d < 49; d++)
	  for (int c = 0; c < 49; c++)
	    for (int b = 0; b < 49; b++)
	      for (int a = 0; a < 49; a++)
	      {
	        
	       B[a]=B[a+1]*A[a][b];
	      }

    return 0;
}