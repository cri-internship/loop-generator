#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(340, 550, "ones");
	double *B = create_one_dim_double(910, "ones");

	for (int c = 0; c < 548; c++)
	  for (int b = 0; b < 336; b++)
	    for (int a = 0; a < 336; a++)
	    {
	      
	      A[a][b]=A[a+4][b+2]*0.405;
	      
	      B[a]=A[a][b]+0.72;
	      A[a][b]=A[a+1][b+1]*B[a];
	    }

    return 0;
}