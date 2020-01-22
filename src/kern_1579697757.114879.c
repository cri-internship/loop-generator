#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(630, "random");
	double **A = create_two_dim_double(390, 330, "random");
	double ***B = create_three_dim_double(880, 60, 360, "random");

	for (int a = 0; a < 630; a++)
	{
	  
	    double var_a=C[a]*0.718;
	    C[a]=0.136;
	  
	    B[a][a][a]=0.735;
	    B[a+3][a][a+2]=0.533;
	}

    return 0;
}