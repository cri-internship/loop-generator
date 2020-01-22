#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(350, "zeros");
	double *B = create_one_dim_double(450, "zeros");

	for (int a = 0; a < 345; a++)
	{
	  
	    A[a]=B[a];
	    A[a+3]=B[a];
	  
	    double var_a=A[a]/0.368;
	    double var_b=A[a+2]-0.522;
	  
	    A[a]=B[a]/0.863;
	    B[a]=B[a+5]*0.31;
	  
	    double var_c=A[a]*0.92;
	    double var_d=A[a+5]*0.297;
	}

    return 0;
}