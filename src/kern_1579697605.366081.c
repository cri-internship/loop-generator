#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(350, 210, 720, "ones");
	float ***E = create_three_dim_float(140, 680, 690, "ones");
	float *B = create_one_dim_float(880, "ones");
	float ***D = create_three_dim_float(60, 680, 990, "ones");
	float *A = create_one_dim_float(590, "ones");

	for (int b = 4; b < 676; b++)
	  for (int a = 5; a < 56; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-4][a-1]/0.834;
	    
	     E[a][b][a]=E[a+1][b+4][a+5]-C[a][b][a]+B[a]*D[a][b][a]/A[a];
	    
	     E[a][b][a]=D[a][b][a]+0.765/C[a][b][a];
	     D[a][b][a]=D[a+4][b+2][a]*B[a];
	    
	     A[a]=E[a][b][a]/0.847;
	     C[a][b][a]=E[a][b-2][a-5]+A[a]*B[a]-D[a][b][a]/C[a][b][a];
	  }

    return 0;
}