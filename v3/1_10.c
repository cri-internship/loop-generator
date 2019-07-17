#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(29641, 29641, 29641);
	float *A = create_one_dim(29641);
	float ***B = create_three_dim(29641, 29641, 29641);
	float **C = create_two_dim(29641, 29641);
	float ***D = create_three_dim(29641, 29641, 29641);
	float *E = create_one_dim(29641);

	for (int c = 0; c < 29641; c++)
	  for (int b = 0; b < 29641; b++)
	    for (int a = 0; a < 29641; a++)
	    {
	      result[c][b][a] = E[b]-B[a][b][a]*C[a][b]+C[b][c]-D[c][a][c]/0.99041501509;
	    }

    return 0;
}