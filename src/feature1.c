#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim(100, 66);
	float *A = create_one_dim(10);
	float ***C = create_three_dim(55, 46, 100);

	for (int b = 0; b < 46; b++)
	  for (int a = 0; a < 10; a++)
	  {
	    A[a+1]=C[a][b][a]+A[a]-B[a][b]*C[a][b][a]+B[a][b]*A[a];
	    A[a]=A[a+1]-B[a][b]/A[a]*C[a][b][a]+B[a][b]+A[a]*C[a][b][a]/B[a][b]-C[a][b][a];
	    B[a][b]=B[a+0][b+1]+B[a][b]-C[a][b][a]*A[a]/A[a]/B[a][b]*C[a][b][a]+B[a][b]-A[a]+C[a][b][a];
	    B[a+0][b+1]=0.64+A[a]/C[a][b][a]*A[a]+C[a][b][a]-B[a][b]/A[a];
	  }

    return 0;
}