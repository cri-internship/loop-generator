#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(120, "zeros");
	float ***E = create_three_dim_float(100, 100, 150, "zeros");
	float ***A = create_three_dim_float(90, 470, 660, "zeros");
	float *D = create_one_dim_float(440, "zeros");
	float *B = create_one_dim_float(650, "zeros");

	for (int b = 0; b < 466; b++)
	  for (int a = 2; a < 86; a++)
	  {
	    
	     float var_a=A[a][b][a]-0.143;
	     float var_b=A[a+4][b+4][a+4]+0.71;
	    
	     B[a]=D[a]/C[a]-0.308;
	     E[a][b][a]=D[a-2]/A[a][b][a];
	  }

    return 0;
}