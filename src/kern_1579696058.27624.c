#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(640, 840, 700, "random");
	double **C = create_two_dim_double(340, 260, "random");
	double ***D = create_three_dim_double(740, 950, 300, "random");
	double *A = create_one_dim_double(860, "random");
	double *E = create_one_dim_double(940, "random");

	for (int a = 5; a < 635; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-5][a-1]+E[a]*D[a][a][a];
	  
	    B[a][a][a]=B[a+1][a][a+2]-A[a];
	  
	    E[a]=E[a+5]+B[a][a][a]/C[a][a];
	  
	    D[a][a][a]=D[a+1][a+3][a+2]-0.88;
	  
	    double var_a=B[a][a][a]*0.989;
	    double var_b=B[a+1][a+5][a+1]*0.406;
	}

    return 0;
}