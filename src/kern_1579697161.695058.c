#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(190, 970, 340, "zeros");
	double ***A = create_three_dim_double(940, 950, 350, "zeros");

	for (int a = 5; a < 190; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-1][a]/0.307;
	  
	    double var_a=B[a][a][a]+0.111;
	    double var_b=B[a-5][a][a-1]*0.84;
	}

    return 0;
}