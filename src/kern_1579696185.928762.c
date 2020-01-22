#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(980, 450, "ones");
	double **A = create_two_dim_double(340, 620, "ones");
	double **D = create_two_dim_double(390, 580, "ones");
	double *B = create_one_dim_double(900, "ones");

	for (int a = 0; a < 899; a++)
	{
	  
	    double var_a=B[a]/0.223;
	    double var_b=B[a+1]-0.084;
	}

    return 0;
}