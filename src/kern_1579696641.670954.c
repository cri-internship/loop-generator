#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(790, 120, "ones");
	float ***D = create_three_dim_float(460, 360, 770, "ones");
	float **C = create_two_dim_float(90, 830, "ones");
	float ***A = create_three_dim_float(690, 770, 60, "ones");
	float **B = create_two_dim_float(870, 510, "ones");

	for (int b = 2; b < 356; b++)
	  for (int a = 3; a < 455; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-2][a-1]+C[a][b]/0.321;
	    
	     D[a][b][a]=D[a+5][b+4][a]/A[a][b][a]-0.285+A[a][b][a];
	    
	     float var_a=B[a][b]+0.509;
	     float var_b=B[a+5][b+4]+0.071;
	  }

    return 0;
}