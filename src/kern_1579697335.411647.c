#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(320, 860, "random");
	double **B = create_two_dim_double(60, 50, "random");

	for (int c = 5; c < 50; c++)
	  for (int b = 3; b < 60; b++)
	    for (int a = 3; a < 60; a++)
	    {
	      
	      B[a][b]=B[a-1][b-1]*A[a][b];
	      
	      A[a][b]=A[a][b+1]/0.717;
	      
	      A[a][b]=0.207;
	      
	      B[a][b]=A[a][b]-0.884;
	      A[a][b]=A[a-3][b-4]+B[a][b];
	    }

    return 0;
}