#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(780, "random");
	double **B = create_two_dim_double(30, 250, "random");
	double ***E = create_three_dim_double(600, 690, 680, "random");
	double ***D = create_three_dim_double(600, 70, 80, "random");
	double ***C = create_three_dim_double(660, 590, 250, "random");

	for (int a = 5; a < 25; a++)
	{
	  
	    B[a][a]=B[a-4][a-5]*0.424;
	  
	    B[a][a]=B[a-1][a-2]*0.998;
	  
	    D[a][a][a]=D[a][a+4][a+4]-0.565*E[a][a][a];
	  
	    B[a][a]=B[a][a]/0.727;
	    C[a][a][a]=B[a+1][a+5]-A[a]*E[a][a][a]+D[a][a][a];
	  
	    double var_a=D[a][a][a]/0.674;
	    double var_b=D[a-3][a-2][a-5]/0.008;
	}

    return 0;
}