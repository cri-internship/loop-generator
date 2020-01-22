#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(640, "random");
	float ***C = create_three_dim_float(700, 240, 230, "random");
	float ***A = create_three_dim_float(780, 640, 430, "random");

	for (int c = 0; c < 430; c++)
	  for (int b = 0; b < 639; b++)
	    for (int a = 0; a < 638; a++)
	    {
	      
	      B[a]=0.241;
	      float  var_a=B[a]-0.675;
	      
	      B[a]=B[a+2]/0.257;
	      
	      A[a][b][c]=A[a+4][b+1][c]-B[a]/C[a][b][c];
	    }

    return 0;
}