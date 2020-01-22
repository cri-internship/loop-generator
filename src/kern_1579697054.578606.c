#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(300, "random");
	double *D = create_one_dim_double(710, "random");
	double **B = create_two_dim_double(20, 160, "random");
	double *C = create_one_dim_double(800, "random");
	double **E = create_two_dim_double(990, 130, "random");

	for (int a = 0; a < 300; a++)
	{
	  
	    C[a]=E[a][a]+A[a];
	    C[a+3]=B[a][a]-0.807;
	  
	    double var_a=D[a]+0.912;
	    double var_b=D[a+2]-0.519;
	  
	    double var_c=D[a]*0.972;
	  
	    double var_e=A[a]+0.352;
	}

    return 0;
}