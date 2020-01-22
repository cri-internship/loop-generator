#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(950, 20, 420, "random");
	double *C = create_one_dim_double(880, "random");
	double *A = create_one_dim_double(270, "random");

	for (int a = 5; a < 267; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-2][a-3]+0.645;
	  
	    B[a][a][a]=B[a][a-4][a-4]-0.089;
	  
	    B[a][a][a]=B[a-4][a-4][a-2]+C[a]*A[a];
	  
	    A[a]=B[a][a][a]+0.144;
	    A[a+3]=C[a];
	  
	    A[a]=C[a]/B[a][a][a];
	  
	    double var_a=C[a]/0.574;
	    double var_b=C[a+5]*0.048;
	}

    return 0;
}