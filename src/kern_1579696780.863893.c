#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(320, 130, 650, "random");
	double **A = create_two_dim_double(410, 500, "random");

	for (int c = 4; c < 650; c++)
	  for (int b = 1; b < 130; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      B[a][b][c]=B[a][b-1][c]/0.736;
	      
	      B[a][b][c]=A[a][b];
	    }

    return 0;
}