#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(870, 130, 340, "ones");
	double **B = create_two_dim_double(970, 480, "ones");
	double **A = create_two_dim_double(10, 350, "ones");

	for (int c = 0; c < 340; c++)
	  for (int b = 5; b < 130; b++)
	    for (int a = 2; a < 10; a++)
	    {
	      
	      A[a][b]=A[a-1][b-4]*0.432;
	      
	      double var_a=C[a][b][c]/0.352;
	      double var_b=C[a-2][b-5][c]+0.081;
	    }

    return 0;
}