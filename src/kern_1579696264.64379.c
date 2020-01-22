#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(790, 540, "ones");
	double **B = create_two_dim_double(660, 550, "ones");

	for (int c = 4; c < 540; c++)
	  for (int b = 3; b < 658; b++)
	    for (int a = 3; a < 658; a++)
	    {
	      
	      A[a][b]=A[a-1][b-1]+0.755;
	      
	      B[a][b]=B[a-3][b]/A[a][b];
	      
	      B[a][b]=B[a+2][b+5]*A[a][b];
	      
	      B[a][b]=A[a][b]/0.005;
	      
	      B[a][b]=A[a][b]*0.948;
	      A[a][b]=A[a-2][b-4]*B[a][b];
	    }

    return 0;
}