#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(810, "ones");
	double ***A = create_three_dim_double(860, 760, 740, "ones");
	double *E = create_one_dim_double(580, "ones");
	double **D = create_two_dim_double(460, 240, "ones");
	double **C = create_two_dim_double(110, 690, "ones");

	for (int a = 4; a < 580; a++)
	{
	  
	    double var_a=E[a]-0.915;
	    double var_b=E[a-4]*0.958;
	}

    return 0;
}