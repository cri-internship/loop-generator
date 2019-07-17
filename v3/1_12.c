#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(17353, 17353, 17353);
	float **A = create_two_dim(17353, 17353);
	float ***B = create_three_dim(17353, 17353, 17353);

	for (int c = 0; c < 17353; c++)
	  for (int b = 0; b < 17353; b++)
	    for (int a = 0; a < 17353; a++)
	    {
	      result[c][b][a] = A[c][c]-A[a][c]*A[b][a]+B[b][a][b]-B[b][c][a]+A[a][b]/0.52786423442;
	    }

    return 0;
}