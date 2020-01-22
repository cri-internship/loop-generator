#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(130, 830, 920, "ones");
	float **C = create_two_dim_float(700, 230, "ones");
	float *B = create_one_dim_float(950, "ones");
	float ***A = create_three_dim_float(990, 490, 560, "ones");

	for (int c = 3; c < 560; c++)
	  for (int b = 5; b < 227; b++)
	    for (int a = 3; a < 128; a++)
	    {
	      
	      D[a][b][c]=D[a-1][b-3][c-1]+0.142;
	      
	      C[a][b]=C[a+2][b+3]/0.875;
	      
	      C[a][b]=C[a+1][b]/D[a][b][c]+B[a]-A[a][b][c];
	      
	      C[a][b]=C[a+2][b]*A[a][b][c]+B[a];
	      
	      D[a][b][c]=D[a+2][b+3][c+3]+C[a][b]-A[a][b][c]/C[a][b];
	      
	      float var_a=A[a][b][c]/0.89;
	      float var_b=A[a-3][b-5][c-3]-0.594;
	    }

    return 0;
}