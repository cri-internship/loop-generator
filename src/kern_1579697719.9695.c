#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(900, 820, "ones");
	double ***C = create_three_dim_double(440, 810, 250, "ones");
	double ***B = create_three_dim_double(670, 10, 90, "ones");

	for (int c = 5; c < 90; c++)
	  for (int b = 2; b < 10; b++)
	    for (int a = 4; a < 670; a++)
	    {
	      
	      A[a][b]=A[a+3][b]*0.894;
	      
	      double var_a=B[a][b][c]/0.105;
	      double var_b=B[a-4][b-2][c-5]/0.506;
	    }

    return 0;
}