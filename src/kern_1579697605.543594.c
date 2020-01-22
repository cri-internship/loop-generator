#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(620, 880, "ones");
	double ***D = create_three_dim_double(910, 660, 600, "ones");
	double ***C = create_three_dim_double(770, 330, 130, "ones");
	double **A = create_two_dim_double(910, 260, "ones");

	for (int a = 5; a < 620; a++)
	{
	  
	    B[a][a]=0.707;
	    B[a-5][a-3]=0.041;
	  
	    D[a][a][a]=B[a][a]/C[a][a][a];
	    B[a][a]=B[a-4][a]+D[a][a][a]/A[a][a];
	  
	    double var_a=D[a][a][a]/0.074;
	    double var_b=D[a-2][a-4][a-4]/0.112;
	}

    return 0;
}