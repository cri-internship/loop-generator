#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(310, 250, "random");
	double *A = create_one_dim_double(50, "random");

	for (int b = 2; b < 250; b++)
	  for (int a = 2; a < 46; a++)
	  {
	    
	     A[a]=A[a+4]+B[a][b];
	    
	     B[a][b]=A[a];
	     B[a-2][b-2]=A[a];
	    
	     B[a][b]=A[a]+B[a][b];
	  }

    return 0;
}