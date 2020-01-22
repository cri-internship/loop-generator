#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(990, "ones");
	float **D = create_two_dim_float(870, 270, "ones");
	float *B = create_one_dim_float(680, "ones");
	float ***E = create_three_dim_float(410, 1000, 160, "ones");
	float ***A = create_three_dim_float(970, 190, 340, "ones");

	for (int b = 4; b < 190; b++)
	  for (int a = 5; a < 405; a++)
	  {
	    
	     C[a]=A[a][b][a]-B[a]+E[a][b][a]/D[a][b];
	     D[a][b]=C[a]/0.628-D[a][b];
	    
	     A[a][b][a]=C[a]+E[a][b][a]*C[a];
	     A[a-5][b-4][a-5]=B[a];
	    
	     E[a][b][a]=0.874;
	     E[a+2][b+5][a+5]=0.713;
	    
	     A[a][b][a]=D[a][b]/C[a]-E[a][b][a]+B[a]*A[a][b][a];
	     E[a][b][a]=D[a-4][b-2]+E[a][b][a];
	    
	     B[a]=E[a][b][a]+C[a]-D[a][b];
	     C[a]=E[a-5][b-4][a]+C[a]/A[a][b][a];
	  }

    return 0;
}