#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(180, 150, 300, "random");
	double **A = create_two_dim_double(140, 310, "random");
	double **E = create_two_dim_double(480, 440, "random");
	double **D = create_two_dim_double(650, 50, "random");
	double **B = create_two_dim_double(390, 260, "random");

	for (int a = 4; a < 135; a++)
	{
	  
	    D[a][a]=D[a-1][a-1]*E[a][a]-B[a][a]+A[a][a]/C[a][a][a];
	  
	    D[a][a]=D[a-3][a-4]/0.478;
	  
	    A[a][a]=A[a][a-4]/0.932;
	  
	    E[a][a]=E[a+2][a]+D[a][a]*B[a][a];
	  
	    A[a][a]=0.767;
	  
	    double var_a=C[a][a][a]-0.472;
	    double var_b=C[a+3][a+5][a+1]/0.96;
	}

    return 0;
}