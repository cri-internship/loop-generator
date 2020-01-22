#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 630, 810, "random");
	double ***B = create_three_dim_double(900, 50, 280, "random");
	double ***D = create_three_dim_double(760, 760, 520, "random");
	double *C = create_one_dim_double(670, "random");

	for (int a = 5; a < 756; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-5][a-3]/0.844;
	  
	    B[a][a][a]=B[a-2][a-4][a-4]/C[a]+0.392-A[a][a][a];
	  
	    D[a][a][a]=D[a-1][a-2][a-5]*0.156;
	  
	    B[a][a][a]=0.314;
	  
	    D[a][a][a]=B[a][a][a]+A[a][a][a]-C[a];
	  
	    double var_a=D[a][a][a]/0.673;
	    double var_b=D[a-2][a-3][a-4]-0.589;
	  
	    double var_c=D[a][a][a]-0.454;
	    double var_d=D[a-4][a-1][a]*0.433;
	}

    return 0;
}