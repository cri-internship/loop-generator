#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(210, 300, "zeros");
	double ***E = create_three_dim_double(810, 210, 210, "zeros");
	double **B = create_two_dim_double(310, 920, "zeros");
	double ***A = create_three_dim_double(180, 490, 730, "zeros");
	double *D = create_one_dim_double(990, "zeros");

	for (int a = 5; a < 180; a++)
	{
	  
	    B[a][a]=B[a][a-5]+0.33;
	  
	    E[a][a][a]=E[a+5][a+3][a]-0.068;
	  
	    A[a][a][a]=0.767;
	    A[a-4][a-3][a-3]=0.972;
	  
	    E[a][a][a]=0.888;
	  
	    double var_a=D[a]-0.269;
	    double var_b=D[a+3]/0.183;
	  
	    E[a][a][a]=E[a][a][a]-C[a][a]/0.65*B[a][a];
	    D[a]=E[a+1][a+2][a+2]/B[a][a]*A[a][a][a]-C[a][a];
	}

    return 0;
}