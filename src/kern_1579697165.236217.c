#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(730, 180, 80, "zeros");
	float *A = create_one_dim_float(540, "zeros");
	float ***C = create_three_dim_float(260, 90, 270, "zeros");

	for (int b = 1; b < 89; b++)
	  for (int a = 5; a < 255; a++)
	  {
	    
	     B[a][b][a]=0.334;
	     B[a-5][b-1][a-3]=0.699;
	    
	     float var_a=C[a][b][a]+0.133;
	     float var_b=C[a+1][b+1][a+5]*0.693;
	  }

    return 0;
}