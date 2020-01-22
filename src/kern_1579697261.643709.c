#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(910, 460, 500, "ones");
	double ***B = create_three_dim_double(840, 840, 1000, "ones");
	double **C = create_two_dim_double(420, 520, "ones");
	double *E = create_one_dim_double(770, "ones");
	double **A = create_two_dim_double(620, 80, "ones");

	for (int a = 0; a < 415; a++)
	{
	  
	    double var_a=C[a][a]-0.493;
	    double var_b=C[a+5][a+3]-0.933;
	}

    return 0;
}