#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(640, 320, "zeros");
	double **D = create_two_dim_double(40, 210, "zeros");
	double **C = create_two_dim_double(160, 710, "zeros");
	double *B = create_one_dim_double(390, "zeros");

	for (int a = 0; a < 159; a++)
	{
	  
	    B[a]=0.949;
	    float  var_a=B[a]*0.315;
	  
	    C[a][a]=C[a+1][a]*D[a][a];
	  
	    double var_b=B[a]-0.249;
	    double var_c=B[a+3]/0.517;
	  
	    double var_d=B[a]*0.487;
	  
	    double var_f=A[a][a]/0.44;
	    double var_g=A[a][a+2]+0.679;
	}

    return 0;
}