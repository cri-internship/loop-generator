#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***result = create_three_dim(16, 16, 16);
	float **A = create_two_dim(16, 16);
	float **B = create_two_dim(16, 16);

	for (int c = 0; c < 16; c++)
	  for (int b = 0; b < 16; b++)
	    for (int a = 0; a < 16; a++)
	    {
	      result[c][b][a] = B[b][b]/B[b][b]*B[c][a]*B[b][c]-B[c][a]*0.715290204668281;
	    }

    return 0;
}
	float *result = create_one_dim(12);
	float *A = create_one_dim(12);
	float **B = create_two_dim(12, 12);
	float **C = create_two_dim(12, 12);
	float ***D = create_three_dim(12, 12, 12);