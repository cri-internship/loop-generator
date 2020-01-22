#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(960, "random");
	float **C = create_two_dim_float(920, 680, "random");
	float *B = create_one_dim_float(230, "random");
	float **D = create_two_dim_float(430, 580, "random");

	for (int b = 4; b < 580; b++)
	  for (int a = 4; a < 225; a++)
	  {
	    
	     C[a][b]=C[a-4][b-4]/0.157;
	    
	     B[a]=B[a+5]/C[a][b]+A[a];
	    
	     D[a][b]=B[a]+A[a]*C[a][b];
	     D[a-3][b-3]=B[a];
	    
	     float var_a=D[a][b]-0.226;
	     float var_b=D[a-3][b-3]/0.926;
	    
	     D[a][b]=D[a][b]+A[a]/B[a]-C[a][b];
	     C[a][b]=D[a][b-4]+C[a][b]-0.545;
	  }

    return 0;
}