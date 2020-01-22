#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(260, 380, "zeros");
	double **B = create_two_dim_double(140, 240, "zeros");
	double *C = create_one_dim_double(430, "zeros");

	for (int c = 3; c < 240; c++)
	  for (int b = 4; b < 140; b++)
	    for (int a = 4; a < 140; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]+0.118-C[a];
	      
	      B[a][b]=B[a-2][b-3]-0.603/A[a][b];
	      
	      A[a][b]=A[a+5][b+5]/0.137;
	      
	      C[a]=C[a]*B[a][b]+0.245;
	      B[a][b]=C[a-1]*B[a][b];
	    }

    return 0;
}