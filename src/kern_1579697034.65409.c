#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(810, 600, 380, "random");
	double *C = create_one_dim_double(870, "random");
	double *B = create_one_dim_double(580, "random");
	double **A = create_two_dim_double(630, 760, "random");

	for (int c = 4; c < 580; c++)
	  for (int b = 4; b < 580; b++)
	    for (int a = 4; a < 580; a++)
	    {
	      
	      B[a]=B[a-4]/0.33;
	      
	      D[a][b][c]=C[a]+A[a][b]-B[a];
	      C[a]=C[a+1]*D[a][b][c];
	    }

    return 0;
}