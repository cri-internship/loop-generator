#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(330, 980, 760, "ones");
	float **A = create_two_dim_float(760, 840, "ones");

	for (int c = 5; c < 840; c++)
	  for (int b = 3; b < 760; b++)
	    for (int a = 3; a < 760; a++)
	    {
	      
	      A[a][b]=A[a-3][b-5]+0.174;
	      
	      A[a][b]=A[a-1][b-4]*0.958;
	    }

    return 0;
}