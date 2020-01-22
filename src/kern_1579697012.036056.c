#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(800, 290, 410, "ones");
	float **A = create_two_dim_float(650, 500, "ones");

	for (int c = 5; c < 500; c++)
	  for (int b = 0; b < 650; b++)
	    for (int a = 0; a < 650; a++)
	    {
	      
	      B[a][b][c]=A[a][b]+0.311;
	      A[a][b]=A[a][b-5]/0.454;
	    }

    return 0;
}