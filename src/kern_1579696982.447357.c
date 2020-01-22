#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(780, 390, "random");
	double **B = create_two_dim_double(490, 870, "random");

	for (int c = 5; c < 389; c++)
	  for (int b = 4; b < 486; b++)
	    for (int a = 4; a < 486; a++)
	    {
	      
	      B[a][b]=A[a][b];
	      B[a+4][b+4]=0.647;
	      
	      double var_a=A[a][b]+0.949;
	      double var_b=A[a-4][b-5]/0.254;
	      
	      A[a][b]=A[a][b]*B[a][b];
	      B[a][b]=A[a+2][b+1]+0.177;
	    }

    return 0;
}