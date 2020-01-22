#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(770, "random");
	double **A = create_two_dim_double(500, 760, "random");

	for (int b = 4; b < 760; b++)
	  for (int a = 2; a < 500; a++)
	  {
	    
	     A[a][b]=A[a-2][b-4]*B[a];
	  }

    return 0;
}