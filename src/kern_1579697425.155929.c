#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(120, "random");
	double *A = create_one_dim_double(310, "random");
	double **C = create_two_dim_double(960, 850, "random");

	for (int c = 3; c < 850; c++)
	  for (int b = 2; b < 305; b++)
	    for (int a = 2; a < 305; a++)
	    {
	      
	      C[a][b]=C[a-2][b-3]*0.726+A[a];
	      
	      A[a]=C[a][b]/0.913;
	      A[a+5]=C[a][b];
	      
	      A[a]=0.473;
	    }

    return 0;
}