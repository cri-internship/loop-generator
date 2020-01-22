#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 840, "ones");
	double **A = create_two_dim_double(750, 530, "ones");

	for (int c = 3; c < 530; c++)
	  for (int b = 2; b < 750; b++)
	    for (int a = 2; a < 750; a++)
	    {
	      
	      B[a][b]=A[a][b]-0.257;
	      A[a][b]=A[a-2][b-3]/B[a][b];
	    }

    return 0;
}