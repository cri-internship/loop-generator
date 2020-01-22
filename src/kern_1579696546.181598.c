#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(590, 350, "ones");
	float **B = create_two_dim_float(680, 460, "ones");
	float *D = create_one_dim_float(20, "ones");
	float ***A = create_three_dim_float(740, 980, 780, "ones");
	float *E = create_one_dim_float(350, "ones");

	for (int c = 0; c < 775; c++)
	  for (int b = 0; b < 460; b++)
	    for (int a = 1; a < 15; a++)
	    {
	      
	      B[a][b]=B[a-1][b]-0.311;
	      
	      D[a]=D[a+5]-0.435;
	      
	      float var_a=A[a][b][c]-0.348;
	      float var_b=A[a+2][b+2][c+5]-0.928;
	      
	      E[a]=E[a]+A[a][b][c]-B[a][b]*C[a][b]/D[a];
	      C[a][b]=E[a+1]/B[a][b];
	    }

    return 0;
}