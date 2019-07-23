#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **result = create_two_dim(15, 15);
	float **A = create_two_dim(15, 15);
	float **B = create_two_dim(15, 15);
	float ***C = create_three_dim(15, 15, 15);
	float **D = create_two_dim(15, 15);
	float **E = create_two_dim(15, 15);

	for (int b = 0; b < 15; b++)
	  for (int a = 0; a < 15; a++)
	  {
	    result[b][a] = B[b][b]+A[a][a]*B[a][a]*D[b][a]+A[b][b]*D[a][b]-0.327915645666044;
	  }

    return 0;
}