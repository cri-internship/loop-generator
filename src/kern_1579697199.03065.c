#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(630, 50, 740, "ones");
	double ***B = create_three_dim_double(820, 290, 890, "ones");
	double **C = create_two_dim_double(20, 440, "ones");
	double ***D = create_three_dim_double(310, 120, 500, "ones");

	for (int a = 5; a < 820; a++)
	{
	  
	    B[a][a][a]=0.648;
	    B[a-5][a-4][a-3]=0.105;
	  
	    double var_a=B[a][a][a]*0.111;
	    double var_b=B[a-4][a-1][a-1]*0.868;
	}

    return 0;
}