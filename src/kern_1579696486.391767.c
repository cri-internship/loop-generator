#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(980, "ones");
	double ***E = create_three_dim_double(420, 850, 760, "ones");
	double *B = create_one_dim_double(420, "ones");
	double ***A = create_three_dim_double(660, 750, 20, "ones");
	double ***D = create_three_dim_double(400, 410, 730, "ones");

	for (int a = 4; a < 417; a++)
	{
	  
	    C[a]=C[a-2]/0.246;
	  
	    C[a]=C[a-4]*0.001;
	  
	    C[a]=C[a+3]-0.059;
	  
	    double var_a=E[a][a][a]*0.57;
	    double var_b=E[a+1][a+3][a+1]-0.166;
	  
	    D[a][a][a]=B[a]-D[a][a][a]*E[a][a][a]/C[a];
	    A[a][a][a]=B[a+2]/A[a][a][a]*D[a][a][a]-C[a];
	  
	    double var_c=C[a]/0.113;
	}

    return 0;
}