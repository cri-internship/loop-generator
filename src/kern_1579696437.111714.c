#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(430, 80, 580, "zeros");
	float **C = create_two_dim_float(970, 500, "zeros");
	float ***D = create_three_dim_float(970, 10, 850, "zeros");
	float *B = create_one_dim_float(910, "zeros");

	for (int c = 2; c < 850; c++)
	  for (int b = 1; b < 10; b++)
	    for (int a = 4; a < 909; a++)
	    {
	      
	      C[a][b]=C[a+2][b]-0.054;
	      
	      B[a]=0.359;
	      B[a+1]=0.401;
	      
	      D[a][b][c]=D[a][b][c]*A[a][b][c]-B[a]/C[a][b];
	      B[a]=D[a-4][b-1][c-2]+A[a][b][c];
	    }

    return 0;
}