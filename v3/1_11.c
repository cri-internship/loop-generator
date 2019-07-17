#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(18903, 18903);
	float *A = create_one_dim(18903);

	for (int b = 0; b < 18903; b++)
	  for (int a = 0; a < 18903; a++)
	  {
	    result[b][a] = A[a]-A[a]/A[a]*A[b]-A[a]/A[b]/0.51560430037;
	  }

    return 0;
}