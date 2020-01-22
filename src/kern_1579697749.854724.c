#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(190, 710, 620, "zeros");
	float *A = create_one_dim_float(560, "zeros");

	for (int c = 3; c < 620; c++)
	  for (int b = 5; b < 710; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      B[a][b][c]=0.158;
	      B[a-5][b-5][c-3]=A[a];
	      
	      float var_a=B[a][b][c]+0.074;
	      float var_b=B[a-5][b-1][c]*0.058;
	    }

    return 0;
}