#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(910, "random");
	double ***E = create_three_dim_double(660, 470, 940, "random");
	double *B = create_one_dim_double(470, "random");
	double *D = create_one_dim_double(180, "random");
	double **A = create_two_dim_double(810, 750, "random");

	for (int a = 0; a < 180; a++)
	{
	  
	    double var_a=D[a]*0.86;
	    double var_b=D[a]+0.958;
	  
	    double var_c=B[a]/0.377;
	    double var_d=B[a+5]/0.783;
	}

    return 0;
}