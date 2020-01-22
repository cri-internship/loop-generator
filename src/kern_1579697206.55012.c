#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(60, 1000, "random");
	double ***D = create_three_dim_double(30, 940, 150, "random");
	double *C = create_one_dim_double(990, "random");
	double *E = create_one_dim_double(930, "random");
	double ***A = create_three_dim_double(360, 500, 190, "random");

	for (int c = 2; c < 190; c++)
	  for (int b = 4; b < 500; b++)
	    for (int a = 2; a < 59; a++)
	    {
	      
	      B[a][b]=B[a-1][b-3]/0.123;
	      
	      B[a][b]=0.69;
	      
	      A[a][b][c]=0.822;
	      A[a-2][b-4][c-2]=0.658;
	    }

    return 0;
}