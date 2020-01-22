#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(820, 520, "random");
	double *D = create_one_dim_double(170, "random");
	double *C = create_one_dim_double(310, "random");
	double **A = create_two_dim_double(1000, 750, "random");

	for (int b = 2; b < 750; b++)
	  for (int a = 2; a < 1000; a++)
	  {
	    
	     A[a][b]=A[a-2][b-2]*D[a];
	  }

    return 0;
}