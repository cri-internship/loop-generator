#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(240, 530, "ones");
	float **B = create_two_dim_float(420, 200, "ones");

	for (int c = 1; c < 200; c++)
	  for (int b = 1; b < 420; b++)
	    for (int a = 1; a < 420; a++)
	    {
	      
	      B[a][b]=A[a][b];
	      B[a][b]=B[a][b]*A[a][b];
	      
	      A[a][b]=B[a][b]/A[a][b];
	      B[a][b]=B[a-1][b-1]/A[a][b];
	    }

    return 0;
}