#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(550, "zeros");
	double **A = create_two_dim_double(240, 250, "zeros");

	for (int c = 1; c < 250; c++)
	  for (int b = 4; b < 238; b++)
	    for (int a = 4; a < 238; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]/0.59;
	      
	      B[a]=B[a+5]-A[a][b];
	      
	      A[a][b]=A[a+2][b]*B[a];
	      
	      B[a]=0.01;
	    }

    return 0;
}