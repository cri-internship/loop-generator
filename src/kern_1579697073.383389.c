#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(270, 530, "zeros");
	double *B = create_one_dim_double(640, "zeros");
	double **C = create_two_dim_double(690, 1000, "zeros");

	for (int a = 5; a < 270; a++)
	{
	  
	    A[a][a]=A[a-2][a-3]/C[a][a]*B[a];
	  
	    A[a][a]=A[a-5][a-2]-C[a][a];
	  
	    C[a][a]=C[a+2][a+1]-A[a][a]+B[a];
	  
	    C[a][a]=C[a+3][a+5]*0.444;
	  
	    double var_a=B[a]/0.349;
	    double var_b=B[a-3]+0.17;
	}

    return 0;
}