#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "random");
	double **B = create_two_dim_double(250, 600, "random");
	double *C = create_one_dim_double(60, "random");

	for (int a = 4; a < 60; a++)
	{
	  
	    C[a]=C[a-4]+0.452;
	  
	    C[a]=C[a-2]/0.093+A[a];
	  
	    A[a]=A[a+3]-0.991;
	  
	    B[a][a]=0.02;
	    B[a-3][a-1]=0.952;
	  
	    A[a]=A[a]-C[a]+B[a][a];
	    B[a][a]=A[a+5]*B[a][a];
	  
	    double var_a=A[a]/0.904;
	    double var_b=A[a-1]*0.844;
	}

    return 0;
}