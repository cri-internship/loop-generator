#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(800, "zeros");
	double *D = create_one_dim_double(100, "zeros");
	double *C = create_one_dim_double(840, "zeros");
	double **B = create_two_dim_double(550, 810, "zeros");

	for (int a = 5; a < 550; a++)
	{
	  
	    A[a]=A[a-4]*0.696;
	  
	    A[a]=A[a+3]*D[a];
	  
	    double var_a=B[a][a]*0.174;
	    B[a][a]=0.456;
	  
	    C[a]=0.453;
	    C[a]=0.856;
	  
	    double var_b=C[a]*0.139;
	    double var_c=C[a]/0.866;
	  
	    B[a][a]=C[a]/A[a]+B[a][a]-0.606;
	    C[a]=C[a+3]/B[a][a]*D[a]+A[a];
	  
	    double var_d=A[a]*0.508;
	    double var_e=A[a-5]-0.565;
	}

    return 0;
}