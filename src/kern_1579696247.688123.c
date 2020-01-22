#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(540, 380, 900, "zeros");
	float **B = create_two_dim_float(640, 30, "zeros");
	float *A = create_one_dim_float(110, "zeros");
	float *D = create_one_dim_float(450, "zeros");
	float *C = create_one_dim_float(30, "zeros");

	for (int b = 1; b < 380; b++)
	  for (int a = 4; a < 25; a++)
	  {
	    
	     C[a]=B[a][b]-E[a][b][a]/D[a]*A[a];
	     B[a][b]=C[a]+E[a][b][a]/D[a]*A[a]-B[a][b];
	    
	     E[a][b][a]=E[a-3][b-1][a-4]*C[a]/C[a]-B[a][b];
	    
	     float var_a=C[a]+0.719;
	     float var_b=C[a+5]*0.994;
	  }

    return 0;
}