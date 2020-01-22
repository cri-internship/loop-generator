#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(270, 60, "random");
	float *A = create_one_dim_float(70, "random");
	float *B = create_one_dim_float(100, "random");
	float ***C = create_three_dim_float(20, 260, 780, "random");

	for (int c = 1; c < 780; c++)
	  for (int b = 4; b < 260; b++)
	    for (int a = 2; a < 20; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-4][c-1]/0.874;
	      
	      A[a]=A[a+4]-0.329;
	      
	      A[a]=B[a]/D[a][b]*C[a][b][c];
	      
	      B[a]=B[a]*0.682+A[a];
	      
	      A[a]=A[a]-D[a][b]*C[a][b][c];
	      D[a][b]=A[a+3]/B[a];
	    }

    return 0;
}