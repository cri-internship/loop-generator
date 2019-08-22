#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim(100, 66);
	float *A = create_one_dim(10);
	float ***C = create_three_dim(55, 46, 100);

	for (int b = 0; b < 46; b++)
	  for (int a = 0; a < 10; a++)
	  {
	    A[a]=B[a][b]-A[a]+C[a][b][a];
	    A[a]=A[a]/C[a][b][a]*B[a][b]+0.92-B[a][b];
	    B[a][b]=B[a][b]-B[a][b]/C[a][b][a];
	    B[a][b]=B[a][b]-C[a][b][a];
	  }

    return 0;
}