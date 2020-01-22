#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(640, "ones");
	double *C = create_one_dim_double(60, "ones");
	double ***D = create_three_dim_double(190, 250, 90, "ones");
	double **A = create_two_dim_double(550, 70, "ones");
	double **B = create_two_dim_double(540, 710, "ones");

	for (int c = 1; c < 70; c++)
	  for (int b = 4; b < 60; b++)
	    for (int a = 4; a < 60; a++)
	    {
	      
	      C[a]=C[a-3]-E[a];
	      
	      A[a][b]=A[a-4][b-1]-C[a]/B[a][b]*D[a][b][c];
	    }

    return 0;
}