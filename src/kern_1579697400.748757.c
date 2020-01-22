#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(160, 750, "zeros");
	double *B = create_one_dim_double(600, "zeros");

	for (int b = 1; b < 750; b++)
	  for (int a = 1; a < 160; a++)
	  {
	    
	     B[a]=A[a][b]+B[a];
	     A[a][b]=A[a-1][b-1]-0.786;
	  }

    return 0;
}