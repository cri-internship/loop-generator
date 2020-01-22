#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(750, 500, 540, "zeros");
	float ***C = create_three_dim_float(610, 640, 540, "zeros");
	float ***A = create_three_dim_float(240, 830, 490, "zeros");

	for (int c = 5; c < 490; c++)
	  for (int b = 2; b < 500; b++)
	    for (int a = 2; a < 240; a++)
	    {
	      
	      A[a][b][c]=A[a][b-1][c-5]+C[a][b][c]-B[a][b][c];
	      
	      B[a][b][c]=B[a][b][c+4]+0.044;
	      
	      A[a][b][c]=0.615;
	      
	      float var_a=C[a][b][c]-0.321;
	      float var_b=C[a-2][b][c-5]/0.113;
	    }

    return 0;
}