#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(170, 910, 450, "random");
	double *E = create_one_dim_double(920, "random");
	double *C = create_one_dim_double(30, "random");
	double **B = create_two_dim_double(60, 640, "random");
	double **D = create_two_dim_double(740, 80, "random");

	for (int a = 1; a < 30; a++)
	{
	  
	    double var_a=C[a]/0.138;
	    double var_b=C[a-1]*0.878;
	}

    return 0;
}