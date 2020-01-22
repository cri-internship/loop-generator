#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(710, 910, 210, "random");
	double *B = create_one_dim_double(670, "random");
	double *A = create_one_dim_double(390, "random");

	for (int c = 0; c < 207; c++)
	  for (int b = 0; b < 907; b++)
	    for (int a = 0; a < 390; a++)
	    {
	      
	      C[a][b][c]=A[a]/B[a]-C[a][b][c];
	      A[a]=0.65-C[a][b][c];
	      
	      C[a][b][c]=A[a];
	    }

    return 0;
}