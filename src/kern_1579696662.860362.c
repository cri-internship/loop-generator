#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(190, 20, 60, "ones");
	float **B = create_two_dim_float(770, 630, "ones");

	for (int c = 3; c < 57; c++)
	  for (int b = 5; b < 19; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b][c-3]-0.691;
	      
	      A[a][b][c]=A[a][b+1][c+3]/B[a][b];
	      
	      B[a][b]=0.359;
	      B[a+2][b+3]=0.13;
	      
	      float var_a=B[a][b]*0.846;
	      float var_b=B[a-5][b-5]-0.488;
	    }

    return 0;
}