#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(270, "zeros");
	double **C = create_two_dim_double(590, 160, "zeros");
	double *D = create_one_dim_double(760, "zeros");
	double **B = create_two_dim_double(700, 280, "zeros");

	for (int a = 4; a < 266; a++)
	{
	  
	    C[a][a]=C[a-3][a-4]/0.419;
	  
	    A[a]=A[a+2]-B[a][a];
	  
	    A[a]=0.022;
	  
	    double var_a=C[a][a]*0.897;
	    double var_b=C[a-1][a]-0.361;
	  
	    double var_c=A[a]-0.835;
	    double var_d=A[a-2]/0.838;
	}

    return 0;
}