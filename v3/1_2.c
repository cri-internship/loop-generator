#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float *result = create_one_dim(9);
	float **A = create_two_dim(9, 9);
	float *B = create_one_dim(9);
	float *C = create_one_dim(9);

	for (int a = 0; a < 9; a++)
	{
	  result[a] = A[a][a]/B[a]/0.72591186669;
	}

    return 0;
}