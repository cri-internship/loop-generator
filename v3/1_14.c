#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(16762, 16762, 16762);
	float *A = create_one_dim(16762);
	float **B = create_two_dim(16762, 16762);

	for (int c = 0; c < 16762; c++)
	  for (int b = 0; b < 16762; b++)
	    for (int a = 0; a < 16762; a++)
	    {
	      result[c][b][a] = A[b]/A[c]/0.93905162345;
	    }

    return 0;
}