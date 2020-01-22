#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(540, 370, "ones");
	float *E = create_one_dim_float(630, "ones");
	float ***C = create_three_dim_float(200, 470, 670, "ones");
	float **B = create_two_dim_float(620, 630, "ones");
	float ***D = create_three_dim_float(480, 170, 800, "ones");

	for (int c = 1; c < 670; c++)
	  for (int b = 2; b < 170; b++)
	    for (int a = 4; a < 200; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b-1][c-1]+C[a][b][c]-0.089/B[a][b];
	      
	      C[a][b][c]=C[a-4][b-2][c]+A[a][b]*D[a][b][c];
	      
	      A[a][b]=A[a+3][b+2]/B[a][b]+E[a];
	      
	      B[a][b]=E[a]-A[a][b]+C[a][b][c]*D[a][b][c];
	      B[a+4][b+2]=C[a][b][c];
	      
	      C[a][b][c]=B[a][b]*C[a][b][c];
	      B[a][b]=B[a+2][b+3]*E[a]/A[a][b];
	    }

    return 0;
}