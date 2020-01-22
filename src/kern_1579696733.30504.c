#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(910, "zeros");
	double ***B = create_three_dim_double(130, 770, 640, "zeros");
	double *E = create_one_dim_double(570, "zeros");
	double **C = create_two_dim_double(120, 700, "zeros");
	double *D = create_one_dim_double(780, "zeros");

	for (int a = 5; a < 116; a++)
	{
	  
	    E[a]=E[a-4]-B[a][a][a]+C[a][a];
	  
	    double var_a=C[a][a]/0.191;
	    double var_b=C[a+2][a+4]*0.54;
	  
	    double var_c=B[a][a][a]/0.743;
	    double var_d=B[a-4][a][a-3]+0.509;
	  
	    C[a][a]=B[a][a][a]/E[a]-0.948;
	    A[a]=B[a][a-2][a-3]*D[a]/D[a];
	  
	    double var_e=B[a][a][a]+0.923;
	    double var_f=B[a-2][a-5][a]+0.495;
	}

    return 0;
}