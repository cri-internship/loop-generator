#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(640, 990, 210, "ones");
	double **A = create_two_dim_double(480, 570, "ones");

	for (int c = 2; c < 210; c++)
	  for (int b = 1; b < 568; b++)
	    for (int a = 3; a < 480; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-1][c-2]+0.234;
	      
	      A[a][b]=A[a][b+2]-B[a][b][c];
	    }

    return 0;
}