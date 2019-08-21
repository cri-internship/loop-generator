#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim(100, 100, 100);
	float *A = create_one_dim(100);
	float **B = create_two_dim(100, 100);

	for (int b = 0; b < 100; b++)
	  for (int a = 0; a < 100; a++)
	  {
	    A[a]=B[a][b]+A[a]/C[a][b][a]*B[a][b]/A[a]*C[a][b][a]-B[a][b]+C[a][b][a];
	    A[a]=A[a]*C[a][b][a]/A[a]-0.1646+B[a][b] >>F;
	    B[a][b]=B[a][b]*C[a][b][a]-A[a]/B[a][b]/C[a][b][a]-A[a]+A[a];
	    B[a][b]=B[a][b]/A[a]+B[a][b]*C[a][b][a]-B[a][b]*C[a][b][a]-A[a] >>F;
	    B[a][b]=C[a][b][a]/A[a]*B[a][b]+C[a][b][a] >>I;
	  }

    return 0;
}