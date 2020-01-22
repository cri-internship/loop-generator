#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(220, 570, "random");
	float ***C = create_three_dim_float(360, 850, 600, "random");
	float *E = create_one_dim_float(530, "random");
	float *A = create_one_dim_float(340, "random");
	float ***D = create_three_dim_float(740, 50, 1000, "random");

	for (int b = 5; b < 50; b++)
	  for (int a = 3; a < 218; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-1][a-3]-0.389;
	    
	     B[a][b]=B[a-3][b-3]-E[a]+D[a][b][a]/0.841;
	    
	     B[a][b]=B[a+2][b+2]/0.728;
	    
	     E[a]=C[a][b][a]/B[a][b]+E[a];
	     C[a][b][a]=C[a+3][b][a+2]+E[a]-A[a]/B[a][b];
	    
	     float var_a=D[a][b][a]-0.805;
	     float var_b=D[a-1][b-5][a-2]/0.391;
	  }

    return 0;
}