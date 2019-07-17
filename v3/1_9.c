#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(18607, 18607, 18607);
	float ***A = create_three_dim(18607, 18607, 18607);
	float **B = create_two_dim(18607, 18607);
	float *C = create_one_dim(18607);

	for (int c = 0; c < 18607; c++)
	  for (int b = 0; b < 18607; b++)
	    for (int a = 0; a < 18607; a++)
	    {
	      result[c][b][a] = C[c]/C[c]/B[c][a]/C[b]-C[c]*B[c][c]/B[a][a]*A[b][a][a]+0.89144453929;
	    }

    return 0;
}