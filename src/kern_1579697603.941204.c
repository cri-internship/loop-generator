#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(920, 820, "zeros");
	float ***B = create_three_dim_float(310, 990, 900, "zeros");
	float ***D = create_three_dim_float(830, 350, 860, "zeros");
	float ***A = create_three_dim_float(930, 400, 310, "zeros");

	for (int c = 0; c < 895; c++)
	  for (int b = 1; b < 817; b++)
	    for (int a = 4; a < 307; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+2][c]/0.872;
	      
	      C[a][b]=C[a+4][b]-0.935;
	      
	      B[a][b][c]=0.015;
	      
	      A[a][b][c]=C[a][b]/B[a][b][c]*A[a][b][c];
	      B[a][b][c]=C[a+4][b+3]-A[a][b][c]/D[a][b][c]*B[a][b][c];
	      
	      float var_a=C[a][b]*0.782;
	      float var_b=C[a-4][b-1]*0.044;
	    }

    return 0;
}