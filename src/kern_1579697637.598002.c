#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(350, 910, 690, "random");
	double *D = create_one_dim_double(300, "random");
	double **A = create_two_dim_double(670, 830, "random");
	double **E = create_two_dim_double(10, 460, "random");
	double *C = create_one_dim_double(910, "random");

	for (int a = 3; a < 7; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-3][a-3]-0.136;
	  
	    C[a]=C[a-1]-0.93;
	  
	    C[a]=C[a-3]*D[a]/0.196;
	  
	    E[a][a]=0.795;
	    E[a+3][a+3]=0.935;
	}

    return 0;
}