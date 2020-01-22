#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(330, 530, "random");
	float **B = create_two_dim_float(570, 970, "random");

	for (int c = 4; c < 529; c++)
	  for (int b = 2; b < 326; b++)
	    for (int a = 2; a < 326; a++)
	    {
	      
	      B[a][b]=B[a+4][b+2]+0.245;
	      
	      B[a][b]=B[a+1][b+2]+A[a][b];
	      
	      A[a][b]=0.14;
	      A[a-2][b-4]=B[a][b];
	      
	      A[a][b]=0.716;
	    }

    return 0;
}