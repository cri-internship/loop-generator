#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(940, 840, "random");
	double **D = create_two_dim_double(10, 930, "random");
	double **B = create_two_dim_double(470, 260, "random");
	double ***A = create_three_dim_double(920, 640, 920, "random");

	for (int a = 5; a < 10; a++)
	{
	  
	    D[a][a]=D[a-3][a-3]*0.274;
	  
	    D[a][a]=B[a][a]-C[a][a];
	  
	    double var_a=D[a][a]*0.061;
	    double var_b=D[a-1][a]+0.088;
	  
	    double var_c=B[a][a]-0.827;
	    double var_d=B[a-5][a-2]*0.675;
	}

    return 0;
}