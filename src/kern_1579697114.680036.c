#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(480, "ones");
	float ***E = create_three_dim_float(170, 610, 210, "ones");
	float ***A = create_three_dim_float(910, 120, 460, "ones");
	float ***D = create_three_dim_float(730, 230, 90, "ones");
	float *C = create_one_dim_float(580, "ones");

	for (int c = 2; c < 90; c++)
	  for (int b = 3; b < 120; b++)
	    for (int a = 3; a < 167; a++)
	    {
	      
	      D[a][b][c]=B[a];
	      D[a-1][b-3][c]=E[a][b][c]*A[a][b][c]/C[a]+A[a][b][c];
	      
	      float var_a=E[a][b][c]/0.756;
	      float var_b=E[a+3][b+5][c+2]*0.554;
	      
	      B[a]=A[a][b][c]-D[a][b][c]+0.898;
	      C[a]=A[a-3][b-3][c-2]*B[a]-0.155+E[a][b][c];
	    }

    return 0;
}