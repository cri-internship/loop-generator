#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(780, 1000, 950, "random");
	float *B = create_one_dim_float(730, "random");
	float **D = create_two_dim_float(870, 380, "random");
	float ***C = create_three_dim_float(290, 350, 170, "random");

	for (int b = 3; b < 346; b++)
	  for (int a = 4; a < 285; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-3][a-3]+0.114;
	    
	     C[a][b][a]=C[a+5][b+2][a+2]/D[a][b];
	    
	     C[a][b][a]=B[a];
	    
	     float var_a=C[a][b][a]+0.246;
	     float var_b=C[a][b+2][a+5]/0.069;
	    
	     A[a][b][a]=A[a][b][a]+C[a][b][a]/D[a][b]-C[a][b][a];
	     C[a][b][a]=A[a+5][b+1][a+1]-C[a][b][a]/B[a]*D[a][b];
	  }

    return 0;
}