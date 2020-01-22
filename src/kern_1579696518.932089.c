#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(450, "ones");
	double *A = create_one_dim_double(380, "ones");

	for (int a = 4; a < 375; a++)
	{
	  
	    A[a]=A[a-1]*0.908;
	  
	    B[a]=B[a+4]-A[a];
	  
	    B[a]=A[a];
	  
	    double var_a=A[a]+0.093;
	    double var_b=A[a+5]*0.925;
	  
	    double var_c=B[a]*0.945;
	    double var_d=B[a+3]*0.043;
	  
	    double var_e=A[a]*0.7;
	    double var_f=A[a-2]*0.374;
	}

    return 0;
}