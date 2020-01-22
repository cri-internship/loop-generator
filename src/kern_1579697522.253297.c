#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(570, "ones");
	double *D = create_one_dim_double(750, "ones");
	double *E = create_one_dim_double(100, "ones");
	double **B = create_two_dim_double(470, 110, "ones");
	double ***A = create_three_dim_double(710, 920, 20, "ones");

	for (int a = 0; a < 750; a++)
	{
	  
	    D[a]=0.607;
	    float  var_a=D[a]-0.522;
	}

    return 0;
}