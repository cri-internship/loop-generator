#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(190, 910, 690, "zeros");
	double *A = create_one_dim_double(590, "zeros");
	double **C = create_two_dim_double(520, 740, "zeros");
	double **B = create_two_dim_double(170, 270, "zeros");

	for (int a = 5; a < 165; a++)
	{
	  
	    C[a][a]=C[a][a-5]/A[a]*D[a][a][a];
	  
	    D[a][a][a]=D[a+5][a+5][a+3]-0.968;
	  
	    B[a][a]=B[a+5][a+5]+C[a][a]/C[a][a]*D[a][a][a];
	  
	    A[a]=0.204;
	    A[a+4]=0.849;
	  
	    double var_a=B[a][a]+0.942;
	    double var_b=B[a-5][a-1]/0.421;
	}

    return 0;
}