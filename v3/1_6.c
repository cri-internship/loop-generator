#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(6269, 6269);
	float **A = create_two_dim(6269, 6269);
	float *B = create_one_dim(6269);
	float *C = create_one_dim(6269);

	for (int b = 0; b < 6269; b++)
	  for (int a = 0; a < 6269; a++)
	  {
	    result[b][a] = B[b]-C[b]+B[a]*A[a][b]/B[b]/C[b]/C[a]-C[b]-A[b][b]+C[a]*C[a]*B[b]/B[a]-0.52254877827;
	  }

    return 0;
}