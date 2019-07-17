#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float *result = create_one_dim(4137);
	float ***A = create_three_dim(4137, 4137, 4137);
	float **B = create_two_dim(4137, 4137);
	float ***C = create_three_dim(4137, 4137, 4137);
	float **D = create_two_dim(4137, 4137);

	for (int a = 0; a < 4137; a++)
	{
	  result[a] = C[a][a][a]*A[a][a][a]+D[a][a]+D[a][a]-A[a][a][a]*C[a][a][a]+C[a][a][a]-D[a][a]/A[a][a][a]/A[a][a][a]-B[a][a]/C[a][a][a]*D[a][a]/C[a][a][a]-C[a][a][a]+A[a][a][a]/0.022357229293;
	}

    return 0;
}