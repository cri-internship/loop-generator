#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim(100);
	float ***C = create_three_dim(50, 50, 50);
	float **B = create_two_dim(50, 50);

	for (int c = 6; c < 50; c++)
	  for (int b = 1; b < 48; b++)
	    for (int a = 2; a < 48; a++)
	    {
	      A[a]=B[a][b]+C[a][b][c]/A[a]*C[a][b][c]-A[a]+B[a][b]*A[a]/B[a][b]+C[a][b][c];
	      B[a][b]=A[a-1]/C[a][b][c]+B[a][b]*A[a]-A[a]*C[a][b][c]+B[a][b]-C[a][b][c];
	      C[a+2][b][c]=C[a][b][c]/B[a][b]+A[a]-B[a][b]+0.92761-C[a][b][c]/B[a][b]*A[a]/C[a][b][c];
	      A[a]=C[a-2][b][c-6]+A[a]*C[a][b][c]-B[a][b]/C[a][b][c]/B[a][b]+A[a];
	      A[a]=B[a-1][b-1]-C[a][b][c]*B[a][b]/A[a]+A[a]+B[a][b]*C[a][b][c]/A[a]-B[a][b]-C[a][b][c];
	      B[a+1][b+2]=B[a][b]-C[a][b][c]+A[a]*B[a][b];
	    }

    return 0;
}