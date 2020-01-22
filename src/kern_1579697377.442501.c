#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(980, 460, 890, "ones");
	float **A = create_two_dim_float(130, 660, "ones");

	for (int c = 2; c < 886; c++)
	  for (int b = 4; b < 456; b++)
	    for (int a = 4; a < 130; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-3][c-2]+0.745;
	      
	      B[a][b][c]=B[a][b+4][c+4]*0.174;
	      
	      float var_a=A[a][b]/0.065;
	      float var_b=A[a][b-4]/0.526;
	    }

    return 0;
}