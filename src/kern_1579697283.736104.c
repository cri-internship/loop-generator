#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(680, 200, "zeros");
	double **A = create_two_dim_double(720, 330, "zeros");
	double **B = create_two_dim_double(370, 920, "zeros");
	double ***C = create_three_dim_double(610, 240, 630, "zeros");

	for (int a = 4; a < 370; a++)
	{
	  
	    double var_a=B[a][a]/0.32;
	    double var_b=B[a][a-4]/0.294;
	}

    return 0;
}