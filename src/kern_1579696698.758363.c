#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(320, 730, 230, "zeros");
	double **A = create_two_dim_double(250, 820, "zeros");

	for (int a = 4; a < 320; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-4][a-1]/0.837;
	}

    return 0;
}