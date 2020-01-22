#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(970, "random");
	double *D = create_one_dim_double(680, "random");
	double *E = create_one_dim_double(420, "random");
	double *A = create_one_dim_double(960, "random");
	double *C = create_one_dim_double(100, "random");

	for (int a = 5; a < 95; a++)
	{
	  
	    E[a]=E[a-1]+B[a]*A[a]/D[a]-C[a];
	  
	    D[a]=0.049;
	    D[a-5]=0.35;
	  
	    E[a]=B[a]+A[a]/D[a]-C[a];
	  
	    B[a]=D[a]*E[a]+0.67;
	    D[a]=D[a+5]-B[a];
	  
	    A[a]=B[a]/E[a]-C[a]+A[a]*0.032;
	    C[a]=B[a-4]+D[a];
	  
	    double var_a=C[a]-0.071;
	    double var_b=C[a+5]+0.969;
	  
	    double var_c=C[a]/0.239;
	    double var_d=C[a-4]/0.116;
	}

    return 0;
}