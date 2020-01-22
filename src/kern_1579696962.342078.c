#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(150, 910, 240, "ones");
	double ***E = create_three_dim_double(410, 490, 750, "ones");
	double ***A = create_three_dim_double(250, 960, 930, "ones");
	double **B = create_two_dim_double(480, 610, "ones");
	double ***D = create_three_dim_double(150, 250, 380, "ones");

	for (int a = 5; a < 150; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-2][a-5]/A[a][a][a];
	  
	    D[a][a][a]=D[a-2][a-2][a-1]+0.516;
	  
	    B[a][a]=B[a-5][a-2]*0.532;
	  
	    B[a][a]=B[a+1][a+4]*0.333/E[a][a][a]-D[a][a][a];
	  
	    A[a][a][a]=A[a+5][a+5][a]-B[a][a]/D[a][a][a];
	  
	    E[a][a][a]=E[a+5][a+3][a+4]+B[a][a]/C[a][a][a]-D[a][a][a]*A[a][a][a];
	  
	    double var_a=E[a][a][a]/0.384;
	    double var_b=E[a-2][a][a-1]*0.448;
	}

    return 0;
}