#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float **result = create_two_dim(19842, 19842);
	float **A = create_two_dim(19842, 19842);
	float ***B = create_three_dim(19842, 19842, 19842);

	for (int b = 0; b < 19842; b++)
	  for (int a = 0; a < 19842; a++)
	  {
	    result[b][a] = B[a][a][b]/B[a][b][b]-A[b][b]*B[b][b][a]*A[b][b]*B[b][a][b]/A[b][a]+0.89332470295;
	  }

    return 0;
}