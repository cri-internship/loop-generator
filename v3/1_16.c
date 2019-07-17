#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float *result = create_one_dim(24704);
	float *A = create_one_dim(24704);
	float **B = create_two_dim(24704, 24704);
	float **C = create_two_dim(24704, 24704);
	float *D = create_one_dim(24704);

	for (int a = 0; a < 24704; a++)
	{
	  result[a] = D[a]*D[a]/C[a][a]/A[a]+A[a]/D[a]/0.17185645702;
	}

    return 0;
}