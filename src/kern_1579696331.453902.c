#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(950, 160, "random");
	double ***C = create_three_dim_double(310, 480, 870, "random");
	double **B = create_two_dim_double(890, 960, "random");

	for (int c = 2; c < 870; c++)
	  for (int b = 5; b < 480; b++)
	    for (int a = 0; a < 310; a++)
	    {
	      
	      C[a][b][c]=C[a][b][c]/A[a][b];
	      B[a][b]=C[a][b-5][c-2]*0.591-B[a][b];
	    }

    return 0;
}