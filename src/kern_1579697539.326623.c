#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(370, 210, 940, "ones");
	double ***D = create_three_dim_double(890, 650, 860, "ones");
	double *A = create_one_dim_double(350, "ones");
	double **C = create_two_dim_double(620, 800, "ones");

	for (int a = 5; a < 345; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-2][a-5]*0.291;
	  
	    B[a][a][a]=B[a-3][a-3][a-2]*C[a][a]+D[a][a][a]/A[a];
	  
	    A[a]=A[a+5]*B[a][a][a]+C[a][a];
	  
	    D[a][a][a]=D[a+5][a][a]+0.722;
	  
	    double var_a=B[a][a][a]/0.924;
	    double var_b=B[a+5][a+2][a+2]-0.938;
	}

    return 0;
}