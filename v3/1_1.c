#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(19, 19);
	float ***A = create_three_dim(19, 19, 19);
	float ***B = create_three_dim(19, 19, 19);

	for (int b = 0; b < 19; b++)
	  for (int a = 0; a < 19; a++)
	  {
	    result[b][a] = B[a][a][a]+A[a][a][b]-B[b][b][b]-A[a][b][a]+B[a][a][b]+B[b][a][b]/B[b][a][a]-0.14942139885;
	  }

    return 0;
}