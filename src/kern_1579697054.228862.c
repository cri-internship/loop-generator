#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(40, 440, "random");
	double **B = create_two_dim_double(170, 110, "random");
	double *C = create_one_dim_double(240, "random");

	for (int b = 5; b < 110; b++)
	  for (int a = 4; a < 40; a++)
	  {
	    
	     A[a][b]=A[a-4][b-5]/0.888;
	    
	     B[a][b]=B[a+4][b]-C[a];
	    
	     B[a][b]=B[a+5][b]*0.147;
	    
	     B[a][b]=A[a][b];
	  }

    return 0;
}