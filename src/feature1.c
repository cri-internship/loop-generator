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

	for (int b = 0; b < 50; b++)
	  for (int a = 0; a < 100; a++)
	  {
	    A[a+1]=A[a]-C[a][b][a]/B[a][b]*A[a]-C[a][b][a]*B[a][b];
	    A[a]=A[a+1]*B[a][b]/C[a][b][a]-A[a]+C[a][b][a]*0.54;
	    B[a][b]=B[a][b-1]-A[a]/B[a][b]*C[a][b][a]+A[a]*C[a][b][a];
	    B[a][b-1]=A[a]+B[a][b];
	  }

    return 0;
}