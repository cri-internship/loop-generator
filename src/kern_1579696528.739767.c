#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(280, 220, "ones");
	float *C = create_one_dim_float(270, "ones");
	float **A = create_two_dim_float(280, 820, "ones");
	float ***D = create_three_dim_float(880, 470, 190, "ones");

	for (int c = 2; c < 190; c++)
	  for (int b = 5; b < 215; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-1][c-2]+0.745;
	      
	      A[a][b]=0.187;
	      A[a-4][b]=0.494;
	      
	      B[a][b]=D[a][b][c]/A[a][b];
	      B[a-2][b-5]=0.111/D[a][b][c]+C[a];
	      
	      C[a]=0.264;
	      C[a-3]=0.132;
	      
	      float var_a=B[a][b]/0.07;
	      float var_b=B[a][b-5]+0.645;
	      
	      C[a]=B[a][b]/A[a][b]-C[a];
	      B[a][b]=B[a][b+5]+A[a][b]-D[a][b][c]*C[a];
	    }

    return 0;
}