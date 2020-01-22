#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(610, 800, 510, "zeros");
	double ***A = create_three_dim_double(830, 540, 980, "zeros");
	double **B = create_two_dim_double(90, 730, "zeros");

	for (int a = 0; a < 88; a++)
	{
	  
	    B[a][a]=B[a+1][a+2]/0.134;
	}

    return 0;
}