#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(350, "zeros");
	double **A = create_two_dim_double(820, 510, "zeros");
	double **C = create_two_dim_double(310, 250, "zeros");
	double *D = create_one_dim_double(10, "zeros");
	double **B = create_two_dim_double(430, 560, "zeros");

	for (int a = 5; a < 8; a++)
	{
	  
	    D[a]=D[a+2]*0.863-A[a][a]+E[a];
	  
	    A[a][a]=C[a][a]*D[a]-C[a][a]/0.239;
	    A[a][a-5]=0.466-C[a][a];
	  
	    double var_a=C[a][a]*0.32;
	    double var_b=C[a][a+3]+0.554;
	  
	    double var_c=E[a]-0.261;
	    double var_d=E[a+5]/0.968;
	}

    return 0;
}