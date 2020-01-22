#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(680, "zeros");
	double **C = create_two_dim_double(300, 810, "zeros");
	double **A = create_two_dim_double(960, 20, "zeros");

	for (int a = 5; a < 295; a++)
	{
	  
	    C[a][a]=C[a-3][a]-0.637;
	  
	    C[a][a]=C[a-1][a-1]*A[a][a];
	  
	    B[a]=B[a+5]-0.955;
	  
	    B[a]=C[a][a]*0.497;
	  
	    double var_a=C[a][a]/0.899;
	    double var_b=C[a+5][a+3]+0.126;
	  
	    double var_c=A[a][a]/0.382;
	    double var_d=A[a][a+2]+0.005;
	  
	    B[a]=A[a][a]+B[a];
	}

    return 0;
}