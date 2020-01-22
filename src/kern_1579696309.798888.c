#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(970, 760, 850, "zeros");
	double ***C = create_three_dim_double(60, 710, 890, "zeros");
	double *E = create_one_dim_double(60, "zeros");
	double **B = create_two_dim_double(580, 500, "zeros");
	double *A = create_one_dim_double(570, "zeros");

	for (int a = 4; a < 55; a++)
	{
	  
	    double var_a=C[a][a][a]*0.592;
	    double var_b=C[a][a-4][a-2]-0.007;
	  
	    B[a][a]=C[a][a][a]/B[a][a]+D[a][a][a];
	    E[a]=C[a+1][a+5][a+4]*E[a]/A[a];
	}

    return 0;
}