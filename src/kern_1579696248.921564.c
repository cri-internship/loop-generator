#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(120, 500, 40, "ones");
	float *A = create_one_dim_float(860, "ones");
	float *C = create_one_dim_float(70, "ones");
	float ***B = create_three_dim_float(850, 640, 940, "ones");
	float ***E = create_three_dim_float(360, 130, 430, "ones");

	for (int c = 5; c < 40; c++)
	  for (int b = 4; b < 130; b++)
	    for (int a = 5; a < 120; a++)
	    {
	      
	      E[a][b][c]=E[a-5][b-4][c-5]/0.015;
	      
	      D[a][b][c]=D[a-1][b-2][c-1]*0.89;
	      
	      D[a][b][c]=A[a]-D[a][b][c]+C[a]*B[a][b][c];
	      B[a][b][c]=A[a+1]/0.354-C[a]*D[a][b][c];
	    }

    return 0;
}