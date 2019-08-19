#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *result = create_one_dim(14);
	float ***A = create_three_dim(14, 10, 12);
	float *B = create_one_dim(14);
	float *C = create_one_dim(14);
	float **D = create_two_dim(14, 14);

	for (int a = 0; a < 14; a++)
	{
	  result[a] = D[a][a]-A[a][a][a]-D[a][a]+B[a]*C[a]/C[a]/D[a][a]+C[a]-B[a]/B[a]/0.856252566918660;
	}

    return 0;
}