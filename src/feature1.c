#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim(100);
	float **B = create_two_dim(50, 50);
	float ***C = create_three_dim(50, 50, 50);

	for (int b = 4; b < 48; b++)
	  for (int a = 0; a < 50; a++)
	  {
	    
	    C[a+2]=C[a-4]-C[a][b][a]/B[a][b]*A[a]+C[a][b][a]*0.40748;
	    
	    A[a]=A[a-1]+A[a]/C[a][b][a]*B[a][b]-A[a]-B[a][b]+C[a][b][a]/C[a][b][a]*A[a];
	  }

    return 0;
}