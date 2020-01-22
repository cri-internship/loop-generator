#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(480, "ones");
	float *B = create_one_dim_float(470, "ones");
	float ***A = create_three_dim_float(450, 340, 850, "ones");
	float *C = create_one_dim_float(470, "ones");
	float ***E = create_three_dim_float(90, 350, 970, "ones");

	for (int c = 3; c < 850; c++)
	  for (int b = 4; b < 340; b++)
	    for (int a = 5; a < 87; a++)
	    {
	      
	      D[a]=D[a-4]-0.308*C[a];
	      
	      A[a][b][c]=A[a-5][b-4][c-3]/0.9;
	      
	      E[a][b][c]=E[a+3][b+1][c+1]+A[a][b][c]/D[a]-B[a];
	      
	      D[a]=B[a]-E[a][b][c]/C[a]+A[a][b][c];
	    }

    return 0;
}