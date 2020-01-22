#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(990, 100, "random");
	double **A = create_two_dim_double(290, 550, "random");
	double *B = create_one_dim_double(630, "random");

	for (int a = 5; a < 625; a++)
	{
	  
	    C[a][a]=C[a-5][a-4]-0.975;
	  
	    B[a]=0.692;
	    B[a+5]=A[a][a]+C[a][a];
	  
	    B[a]=C[a][a]*B[a];
	    C[a][a]=C[a-5][a-2]-B[a]*A[a][a];
	  
	    double var_a=B[a]*0.697;
	    double var_b=B[a-4]-0.324;
	  
	    double var_c=C[a][a]/0.719;
	    double var_d=C[a+5][a+2]*0.033;
	}

    return 0;
}