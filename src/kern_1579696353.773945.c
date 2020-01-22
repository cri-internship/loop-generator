#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(230, 220, 110, "ones");
	float *D = create_one_dim_float(20, "ones");
	float *E = create_one_dim_float(830, "ones");
	float **B = create_two_dim_float(380, 530, "ones");
	float **C = create_two_dim_float(480, 680, "ones");

	for (int c = 3; c < 110; c++)
	  for (int b = 4; b < 220; b++)
	    for (int a = 2; a < 19; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-4][c-2]+0.762;
	      
	      D[a]=D[a+1]+0.045;
	      
	      A[a][b][c]=B[a][b]/C[a][b];
	      
	      A[a][b][c]=C[a][b]/A[a][b][c]*D[a]+A[a][b][c];
	      B[a][b]=C[a-2][b]*E[a]-A[a][b][c]/D[a];
	    }

    return 0;
}