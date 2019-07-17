#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float *result = create_one_dim(21199);
	float ***A = create_three_dim(21199, 21199, 21199);
	float **B = create_two_dim(21199, 21199);
	float ***C = create_three_dim(21199, 21199, 21199);

	for (int a = 0; a < 21199; a++)
	{
	  result[a] = C[a][a][a]+A[a][a][a]+C[a][a][a]*C[a][a][a]*B[a][a]+A[a][a][a]/A[a][a][a]*A[a][a][a]+A[a][a][a]/C[a][a][a]+B[a][a]*C[a][a][a]/A[a][a][a]-B[a][a]/A[a][a][a]-C[a][a][a]-0.077163719481;
	}

    return 0;
}