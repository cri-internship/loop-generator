#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(740, "random");
	float *A = create_one_dim_float(320, "random");
	float ***D = create_three_dim_float(370, 130, 480, "random");
	float ***C = create_three_dim_float(880, 810, 600, "random");
	float *E = create_one_dim_float(260, "random");

	for (int c = 4; c < 480; c++)
	  for (int b = 3; b < 130; b++)
	    for (int a = 2; a < 370; a++)
	    {
	      
	      E[a]=B[a]-0.402*E[a]+D[a][b][c]/C[a][b][c];
	      B[a]=B[a]+0.849*D[a][b][c];
	      
	      C[a][b][c]=D[a][b][c]+B[a]-C[a][b][c]/E[a]*B[a];
	      A[a]=D[a-2][b-3][c-4]/A[a];
	    }

    return 0;
}