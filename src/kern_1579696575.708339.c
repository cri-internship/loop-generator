#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(120, 90, "ones");
	double ***B = create_three_dim_double(700, 840, 400, "ones");

	for (int c = 1; c < 400; c++)
	  for (int b = 4; b < 90; b++)
	    for (int a = 2; a < 120; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-4][c-1]/A[a][b];
	      
	      A[a][b]=A[a-2][b-3]/0.931;
	    }

    return 0;
}