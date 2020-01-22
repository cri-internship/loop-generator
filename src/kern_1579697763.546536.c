#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(330, "ones");
	double ***D = create_three_dim_double(650, 670, 590, "ones");
	double *B = create_one_dim_double(830, "ones");
	double *A = create_one_dim_double(950, "ones");

	for (int a = 0; a < 329; a++)
	{
	  
	    B[a]=B[a+4]*0.435;
	  
	    C[a]=C[a+1]*0.438;
	  
	    D[a][a][a]=D[a+5][a+5][a+2]-0.455;
	  
	    D[a][a][a]=0.453;
	  
	    double var_a=A[a]/0.475;
	    double var_b=A[a]/0.74;
	  
	    double var_c=B[a]/0.316;
	    double var_d=B[a+5]/0.469;
	  
	    B[a]=B[a]+0.28;
	}

    return 0;
}