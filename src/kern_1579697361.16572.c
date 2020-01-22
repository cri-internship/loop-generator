#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(710, "zeros");
	double *B = create_one_dim_double(540, "zeros");

	for (int a = 3; a < 536; a++)
	{
	  
	    A[a]=A[a-3]+0.31;
	  
	    B[a]=A[a];
	    B[a]=B[a]+A[a];
	  
	    A[a]=A[a+1]-B[a];
	  
	    B[a]=B[a+4]/A[a];
	  
	    double var_a=B[a]/0.786;
	    double var_b=B[a+3]-0.51;
	  
	    double var_c=B[a]/0.183;
	    double var_d=B[a-2]+0.614;
	  
	    double var_e=A[a]-0.369;
	    double var_f=A[a+2]-0.695;
	}

    return 0;
}