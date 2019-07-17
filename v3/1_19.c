#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(8726, 8726, 8726);
	float *A = create_one_dim(8726);
	float **B = create_two_dim(8726, 8726);
	float **C = create_two_dim(8726, 8726);
	float **D = create_two_dim(8726, 8726);
	float ***E = create_three_dim(8726, 8726, 8726);

	for (int c = 0; c < 8726; c++)
	  for (int b = 0; b < 8726; b++)
	    for (int a = 0; a < 8726; a++)
	    {
	      result[c][b][a] = C[c][a]+B[c][c]*D[c][a]/D[a][a]/0.87446806184;
	    }

    return 0;
}