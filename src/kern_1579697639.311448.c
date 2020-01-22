#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(770, 480, 990, "zeros");
	float *A = create_one_dim_float(750, "zeros");

	for (int c = 2; c < 986; c++)
	  for (int b = 2; b < 475; b++)
	    for (int a = 3; a < 770; a++)
	    {
	      
	      B[a][b][c]=A[a];
	      B[a-3][b-2][c-2]=0.277;
	      
	      float var_a=B[a][b][c]/0.82;
	      float var_b=B[a][b+5][c+4]+0.629;
	    }

    return 0;
}