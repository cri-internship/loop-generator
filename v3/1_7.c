#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float *result = create_one_dim(31461);
	float ***A = create_three_dim(31461, 31461, 31461);
	float ***B = create_three_dim(31461, 31461, 31461);

	for (int a = 0; a < 31461; a++)
	{
	  result[a] = A[a][a][a]-B[a][a][a]/A[a][a][a]+A[a][a][a]+A[a][a][a]+0.88003959288;
	}

    return 0;
}