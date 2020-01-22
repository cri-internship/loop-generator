#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(700, "zeros");
	double **B = create_two_dim_double(210, 490, "zeros");
	double ***A = create_three_dim_double(480, 980, 610, "zeros");

	for (int a = 4; a < 210; a++)
	{
	  
	    double var_a=B[a][a]/0.449;
	    double var_b=B[a-4][a-3]*0.726;
	}

    return 0;
}