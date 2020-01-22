#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(590, "random");
	double **D = create_two_dim_double(200, 800, "random");
	double *B = create_one_dim_double(370, "random");
	double *A = create_one_dim_double(650, "random");

	for (int a = 4; a < 196; a++)
	{
	  
	    C[a]=0.855;
	    float  var_a=C[a]*0.927;
	  
	    A[a]=A[a-1]*D[a][a]/0.317;
	  
	    C[a]=A[a]*B[a]/D[a][a];
	  
	    double var_b=D[a][a]*0.89;
	    double var_c=D[a+4][a+2]-0.811;
	}

    return 0;
}