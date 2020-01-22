#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(820, 490, "random");
	float ***B = create_three_dim_float(710, 1000, 180, "random");

	for (int c = 0; c < 180; c++)
	  for (int b = 3; b < 490; b++)
	    for (int a = 5; a < 710; a++)
	    {
	      
	      A[a][b]=A[a-5][b-2]/0.515;
	      
	      B[a][b][c]=B[a-1][b-3][c]/A[a][b];
	      
	      float  var_a=B[a][b][c]/0.523;
	    }

    return 0;
}