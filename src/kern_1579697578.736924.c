#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(420, 950, "random");
	double *A = create_one_dim_double(40, "random");

	for (int b = 5; b < 950; b++)
	  for (int a = 5; a < 37; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]-A[a];
	    
	     A[a]=A[a+3]/0.557;
	    
	     B[a][b]=A[a];
	    
	     A[a]=A[a]+B[a][b];
	     B[a][b]=A[a-5]*B[a][b];
	  }

    return 0;
}