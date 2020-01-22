#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(60, 480, 110, "ones");
	double *C = create_one_dim_double(350, "ones");
	double **E = create_two_dim_double(910, 360, "ones");
	double *B = create_one_dim_double(610, "ones");
	double **A = create_two_dim_double(460, 640, "ones");

	for (int a = 4; a < 55; a++)
	{
	  
	    A[a][a]=A[a-2][a-3]-0.008;
	  
	    C[a]=C[a-4]+0.779;
	  
	    D[a][a][a]=D[a+5][a+1][a+3]+E[a][a]/A[a][a]*B[a]-0.155;
	  
	    B[a]=E[a][a]+D[a][a][a]/C[a]*D[a][a][a]-0.143;
	    D[a][a][a]=E[a-2][a-1]+A[a][a];
	  
	    double var_a=D[a][a][a]-0.908;
	    double var_b=D[a+3][a+1][a+2]-0.961;
	}

    return 0;
}