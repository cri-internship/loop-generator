#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(230, "ones");
	double **D = create_two_dim_double(980, 790, "ones");
	double ***C = create_three_dim_double(210, 200, 480, "ones");
	double ***B = create_three_dim_double(560, 670, 970, "ones");

	for (int c = 1; c < 970; c++)
	  for (int b = 2; b < 670; b++)
	    for (int a = 1; a < 560; a++)
	    {
	      
	      B[a][b][c]=0.998;
	      B[a-1][b-2][c-1]=C[a][b][c]/A[a]*A[a];
	    }

    return 0;
}