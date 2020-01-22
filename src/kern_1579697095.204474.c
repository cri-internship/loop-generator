#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "zeros");
	double **B = create_two_dim_double(160, 670, "zeros");

	for (int a = 5; a < 155; a++)
	{
	  
	    A[a]=A[a-4]-0.625;
	  
	    B[a][a]=B[a-4][a]/A[a];
	  
	    B[a][a]=B[a-3][a-5]-0.477;
	  
	    A[a]=B[a][a];
	  
	    double var_a=B[a][a]/0.844;
	    double var_b=B[a+5][a+4]-0.366;
	  
	    double var_c=A[a]*0.771;
	    double var_d=A[a+2]+0.297;
	  
	    B[a][a]=A[a]*B[a][a];
	    A[a]=A[a+1]/B[a][a];
	}

    return 0;
}