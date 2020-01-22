#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(710, 830, "ones");
	double *A = create_one_dim_double(260, "ones");
	double ***B = create_three_dim_double(710, 880, 570, "ones");

	for (int c = 1; c < 259; c++)
	  for (int b = 1; b < 259; b++)
	    for (int a = 1; a < 259; a++)
	    {
	      
	      A[a]=A[a]/C[a][b];
	      C[a][b]=A[a-1]+0.392*B[a][b][c];
	      
	      B[a][b][c]=A[a]+C[a][b]-B[a][b][c];
	      C[a][b]=A[a+1]-B[a][b][c];
	    }

    return 0;
}