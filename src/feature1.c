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

	for (int c = 3; c < 47; c++)
	  for (int b = 0; b < 46; b++)
	    for (int a = 0; a < 46; a++)
	    {
	      
	      A[a]=B[a][b]*A[a]+0.35812/C[a][b][c];
	      B[a][b]=A[a]+A[a]/B[a][b]-C[a][b][c]*B[a][b]-C[a][b][c]+A[a]/C[a][b][c]*A[a];
	      
	      C[c+1]=C[c-5]/B[a][b]*A[a]-C[a][b][c]+B[a][b]/A[a]*C[a][b][c]-A[a];
	      
	      B[b+1]=B[b+4]-B[a][b]*A[a]+C[a][b][c]/C[a][b][c]+B[a][b]/A[a]-A[a];
	      
	      C[c+3]=0.07609/B[a][b]-C[a][b][c]*A[a]+C[a][b][c]*B[a][b]/B[a][b]-A[a];
	      C[c+3]=C[a][b][c]+A[a]*B[a][b]-A[a]/B[a][b]-C[a][b][c]+C[a][b][c]*B[a][b];
	      
	      A[a]=A[a]*0.95267-C[a][b][c]+A[a]/B[a][b]+A[a]/C[a][b][c]*B[a][b];
	      A[a]=A[a]*B[a][b]+A[a]-C[a][b][c]/A[a];
	    }

    return 0;
}