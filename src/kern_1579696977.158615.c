#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(150, 350, 330, "random");
	float ***D = create_three_dim_float(150, 10, 160, "random");
	float *C = create_one_dim_float(990, "random");
	float ***B = create_three_dim_float(260, 420, 510, "random");
	float *E = create_one_dim_float(860, "random");

	for (int c = 5; c < 158; c++)
	  for (int b = 5; b < 8; b++)
	    for (int a = 5; a < 149; a++)
	    {
	      
	      D[a][b][c]=D[a+1][b+2][c+2]/C[a]*0.156-E[a]+B[a][b][c];
	      
	      B[a][b][c]=D[a][b][c]/D[a][b][c]+E[a];
	      B[a-4][b-5][c-5]=A[a][b][c]-E[a]*0.653/C[a];
	      
	      float var_a=C[a]/0.095;
	      float var_b=C[a-5]/0.843;
	    }

    return 0;
}