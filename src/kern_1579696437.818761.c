#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(250, "zeros");
	double **A = create_two_dim_double(410, 420, "zeros");

	for (int c = 2; c < 416; c++)
	  for (int b = 4; b < 250; b++)
	    for (int a = 4; a < 250; a++)
	    {
	      
	      A[a][b]=A[a-3][b]+0.278;
	      
	      A[a][b]=A[a+5][b+2]-0.974;
	      
	      A[a][b]=A[a+1][b+4]*0.59;
	      
	      B[a]=A[a][b];
	      B[a]=A[a][b];
	    }

    return 0;
}