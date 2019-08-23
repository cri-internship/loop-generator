#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim(100);
	float **B = create_two_dim(100, 50);
	float ***C = create_three_dim(100, 100, 100);

	for (int c = 2; c < 100 + 2; c++)
	  for (int b = -2; b < 50 - 2; b++)
	    for (int a = -1; a < 100 - 1; a++)
	    {
	      A[a+1]=C[a][b][c]-A[a]*B[a][b]+A[a]-C[a][b][c]*B[a][b]+C[a][b][c];
	      A[a]=A[a+1]-C[a][b][c]*A[a]+B[a][b]/A[a]*C[a][b][c]/B[a][b]+A[a];
	      C[a][b+2][c-2]=A[a]+B[a][b]/C[a][b][c]-B[a][b]-C[a][b][c]+A[a];
	      B[a][b]=C[a][b+2][c-2]/C[a][b][c]*B[a][b]+A[a]-C[a][b][c]*B[a][b]/A[a];
	      B[a][b]=B[a][b-1]*C[a][b][c]-0.1+B[a][b]/C[a][b][c];
	      B[a][b-1]=C[a][b][c]/A[a]+B[a][b]-B[a][b]+0.44;
	    }

    return 0;
}