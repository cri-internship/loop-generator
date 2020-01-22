#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(840, "random");
	double ***E = create_three_dim_double(220, 110, 110, "random");
	double *B = create_one_dim_double(340, "random");
	double *A = create_one_dim_double(500, "random");
	double ***C = create_three_dim_double(780, 710, 90, "random");

	for (int a = 5; a < 216; a++)
	{
	  
	    D[a]=D[a-2]-0.543;
	  
	    A[a]=A[a-2]/E[a][a][a]-B[a]*D[a]+C[a][a][a];
	  
	    C[a][a][a]=C[a-2][a-3][a-2]-0.061;
	  
	    A[a]=A[a-3]/B[a]+E[a][a][a]-C[a][a][a];
	  
	    double var_a=E[a][a][a]*0.13;
	    double var_b=E[a+4][a+2][a+2]+0.064;
	  
	    C[a][a][a]=D[a]+A[a]-0.732;
	    B[a]=D[a+3]*E[a][a][a]+B[a]-C[a][a][a];
	  
	    double var_c=A[a]-0.451;
	    double var_d=A[a-5]*0.869;
	}

    return 0;
}