#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(17596, 17596, 17596);
	float ***A = create_three_dim(17596, 17596, 17596);

	for (int c = 0; c < 17596; c++)
	  for (int b = 0; b < 17596; b++)
	    for (int a = 0; a < 17596; a++)
	    {
	      result[c][b][a] = A[a][a][a]*A[a][b][a]-A[a][b][c]+A[a][c][b]-A[a][c][c]*A[c][c][c]-A[b][b][b]/A[c][c][b]/A[b][a][b]/A[c][b][c]-A[b][a][b]-A[c][b][c]*A[a][b][c]*0.018330803748;
	    }

    return 0;
}