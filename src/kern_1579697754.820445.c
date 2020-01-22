#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(590, 560, 800, "random");
	double *C = create_one_dim_double(900, "random");
	double ***E = create_three_dim_double(380, 930, 750, "random");
	double ***A = create_three_dim_double(150, 500, 870, "random");
	double ***B = create_three_dim_double(100, 370, 120, "random");

	for (int a = 0; a < 147; a++)
	{
	  
	    double var_a=A[a][a][a]-0.377;
	    double var_b=A[a+2][a+3][a]/0.405;
	}

    return 0;
}