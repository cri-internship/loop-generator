#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(462, 462);
	float *A = create_one_dim(462);
	float **B = create_two_dim(462, 462);
	float *C = create_one_dim(462);

	for (int b = 0; b < 462; b++)
	  for (int a = 0; a < 462; a++)
	  {
	    result[b][a] = C[a]*B[a][b]-0.93261313054;
	  }

    return 0;
}