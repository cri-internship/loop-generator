#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 460, "random");
	double *E = create_one_dim_double(970, "random");
	double **D = create_two_dim_double(470, 160, "random");
	double ***B = create_three_dim_double(230, 950, 450, "random");
	double *C = create_one_dim_double(270, "random");

	for (int c = 0; c < 460; c++)
	  for (int b = 1; b < 686; b++)
	    for (int a = 1; a < 686; a++)
	    {
	      
	      A[a][b]=A[a+4][b]*C[a]-0.974;
	      
	      E[a]=0.105;
	      E[a-1]=B[a][b][c]/C[a]+D[a][b];
	    }

    return 0;
}