#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim(50, 50, 50);
	float *A = create_one_dim(100);
	float **B = create_two_dim(50, 50);

	for (int c = 4; c < 48; c++)
	  for (int b = 3; b < 50; b++)
	    for (int a = 2; a < 48; a++)
	    {
	      A[a]=C[a][b][c]*A[a]/B[a][b]+C[a][b][c]+0.15547/B[a][b]-C[a][b][c];
	      A[a]=A[a-1]*B[a][b]+C[a][b][c]-0.7948/B[a][b]*A[a]-C[a][b][c]+A[a]/C[a][b][c];
	      C[a+2][b][c+2]=B[a][b]+A[a]-C[a][b][c];
	      B[a][b]=C[a-2][b][c-4]*B[a][b]-A[a]/C[a][b][c]+B[a][b]*C[a][b][c]/A[a]+A[a]-C[a][b][c];
	      B[a][b]=B[a-2][b-3]/A[a]-C[a][b][c]+B[a][b]*B[a][b]-C[a][b][c]*A[a];
	      B[a][b]=B[a][b]-A[a]+C[a][b][c]/A[a]*B[a][b]-C[a][b][c]/C[a][b][c];
	    }

    return 0;
}