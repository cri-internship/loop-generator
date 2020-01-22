#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(140, 220, 850, "random");
	double **B = create_two_dim_double(540, 890, "random");

	for (int a = 0; a < 135; a++)
	{
	  
	    A[a][a][a]=0.778;
	    A[a+1][a+5][a+4]=0.526;
	}

    return 0;
}