#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(17134, 17134);
	float *A = create_one_dim(17134);
	float **B = create_two_dim(17134, 17134);
	float ***C = create_three_dim(17134, 17134, 17134);
	float **D = create_two_dim(17134, 17134);
	float ***E = create_three_dim(17134, 17134, 17134);

	for (int b = 0; b < 17134; b++)
	  for (int a = 0; a < 17134; a++)
	  {
	    result[b][a] = C[a][b][b]*E[a][a][a]-A[a]+A[a]+D[b][b]+E[b][a][a]/D[b][b]-0.98840387323;
	  }

    return 0;
}