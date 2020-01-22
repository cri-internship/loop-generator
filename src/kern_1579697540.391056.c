#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(780, 680, 290, "random");
	double *C = create_one_dim_double(320, "random");
	double *A = create_one_dim_double(260, "random");

	for (int c = 0; c < 317; c++)
	  for (int b = 0; b < 317; b++)
	    for (int a = 0; a < 317; a++)
	    {
	      
	      B[a][b][c]=C[a]-A[a];
	      A[a]=C[a+3]/B[a][b][c]-B[a][b][c];
	    }

    return 0;
}