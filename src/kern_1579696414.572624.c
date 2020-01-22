#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(700, 590, 470, "ones");
	float **B = create_two_dim_float(980, 40, "ones");

	for (int c = 1; c < 470; c++)
	  for (int b = 4; b < 37; b++)
	    for (int a = 4; a < 700; a++)
	    {
	      
	      B[a][b]=B[a-1][b-4]+0.407;
	      
	      A[a][b][c]=A[a][b][c-1]*0.085;
	      
	      B[a][b]=B[a-4][b-1]*0.384;
	      
	      float var_a=A[a][b][c]/0.841;
	      float var_b=A[a-3][b-1][c]+0.993;
	    }

    return 0;
}