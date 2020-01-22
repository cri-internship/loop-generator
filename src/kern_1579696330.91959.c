#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(440, 780, 60, "ones");

	for (int c = 4; c < 60; c++)
	  for (int b = 3; b < 780; b++)
	    for (int a = 4; a < 440; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-3][c-1]*0.037;
	      
	      float var_a=A[a][b][c]+0.97;
	      float var_b=A[a][b-2][c-4]+0.006;
	    }

    return 0;
}