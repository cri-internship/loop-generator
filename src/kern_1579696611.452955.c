#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(850, 690, "zeros");
	double *B = create_one_dim_double(400, "zeros");

	for (int a = 2; a < 395; a++)
	{
	  
	    B[a]=B[a+4]+0.498;
	  
	    A[a][a]=A[a+2][a+5]-0.919;
	  
	    B[a]=0.381;
	  
	    double var_a=B[a]/0.991;
	    double var_b=B[a-2]+0.579;
	  
	    double var_c=A[a][a]*0.035;
	    double var_d=A[a+2][a+2]+0.958;
	  
	    double var_e=B[a]+0.891;
	    double var_f=B[a+5]-0.437;
	}

    return 0;
}