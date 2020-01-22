#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(230, 320, "ones");
	double ***C = create_three_dim_double(90, 10, 90, "ones");
	double ***B = create_three_dim_double(230, 780, 140, "ones");

	for (int c = 4; c < 320; c++)
	  for (int b = 0; b < 230; b++)
	    for (int a = 0; a < 230; a++)
	    {
	      
	      A[a][b]=A[a][b-4]+0.769;
	    }

    return 0;
}