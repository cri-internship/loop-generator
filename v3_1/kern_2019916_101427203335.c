#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(100, "random");
	float ***C = create_three_dim_float(40, 150, 80, "random");
	float **B = create_two_dim_float(50, 50, "random");

	for (int c = 0; c < 80; c++)
	  for (int b = 0; b < 48; b++)
	    for (int a = 3; a < 39; a++)
	    {
	      
	      A[a-3]=B[a][b];
	      B[a][b]=A[a-3]+C[a][b][c];
	      
	      C[a][b][c]=C[a-1][b][c]/A[a]*A[a];
	      
	      A[a]=A[a-3]-C[a][b][c]+0.384;
	      A[a-3]=C[a][b][c];
	      
	      B[a][b]=B[a+1][b+2]-0.196;
	      
	      B[a-1][b+1]=0.406;
	      B[a-1][b+1]=C[a][b][c]-A[a];
	      
	      B[a][b]=C[a][b][c]-0.582/B[a][b];
	      B[a][b]=C[a+1][b][c]+A[a]/B[a][b];
	      
	      float var_a=A[a+3]+0.746;
	      float var_b=A[a+7]/0.616;
	    }

    return 0;
}