#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(710, 150, 110, "random");
	double *A = create_one_dim_double(390, "random");

	for (int c = 5; c < 110; c++)
	  for (int b = 3; b < 150; b++)
	    for (int a = 1; a < 388; a++)
	    {
	      
	      B[a][b][c]=B[a][b][c-1]/A[a];
	      
	      B[a][b][c]=B[a-1][b-3][c-5]+0.095;
	      
	      A[a]=A[a+2]-B[a][b][c];
	    }

    return 0;
}