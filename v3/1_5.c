#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float *result = create_one_dim(5591);
	float *A = create_one_dim(5591);
	float **B = create_two_dim(5591, 5591);
	float **C = create_two_dim(5591, 5591);

	for (int a = 0; a < 5591; a++)
	{
	  result[a] = C[a][a]*B[a][a]-B[a][a]-B[a][a]*B[a][a]-B[a][a]-A[a]/B[a][a]+A[a]-A[a]*A[a]/A[a]*0.19302269671;
	}

    return 0;
}