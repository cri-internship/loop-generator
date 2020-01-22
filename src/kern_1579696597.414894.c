#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(700, 590, 860, "random");
	double ***B = create_three_dim_double(90, 1000, 570, "random");

	for (int a = 5; a < 90; a++)
	{
	  
	    B[a][a][a]=B[a-4][a][a-5]/0.219;
	  
	    A[a][a][a]=A[a-1][a-3][a-5]+0.26;
	  
	    double var_a=B[a][a][a]+0.852;
	    double var_b=B[a-2][a-5][a-3]/0.286;
	}

    return 0;
}