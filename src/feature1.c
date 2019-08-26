#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim(100, 100, 100);
	float *A = create_one_dim(100);
	float **B = create_two_dim(100, 50);

	for (int c = 2; c < 100; c++)
	  for (int b = 1; b < 50; b++)
	    for (int a = 0; a < 99; a++)
	    {
	      A=C[a][b][c]-B[a][b]+A[a]*C[a][b][c];
	      B[a][b]=A[a+1]*A[a]+C[a][b][c]-0.33651/B[a][b]+A[a]/C[a][b][c]*B[a][b]-C[a][b][c]*A[a];
	      C=B[a][b]-A[a]*C[a][b][c]/B[a][b]-C[a][b][c]+0.58023;
	      A[a]=C[a][b+2][c-2]-B[a][b]+C[a][b][c]/A[a]*B[a][b];
	      B[a][b]=B[a][b-1]+B[a][b]*A[a]/C[a][b][c]-C[a][b][c]-A[a]+B[a][b]/C[a][b][c]*A[a];
	      B=A[a]/B[a][b]-C[a][b][c];
	    }

    return 0;
}