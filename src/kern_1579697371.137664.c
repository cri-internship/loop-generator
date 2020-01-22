#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(590, 60, "random");
	double **D = create_two_dim_double(680, 930, "random");
	double *B = create_one_dim_double(640, "random");
	double *A = create_one_dim_double(320, "random");

	for (int a = 5; a < 585; a++)
	{
	  
	    C[a][a]=C[a][a-3]-0.473;
	  
	    C[a][a]=0.678;
	  
	    D[a][a]=A[a]*B[a];
	    D[a-1][a-3]=C[a][a]/A[a]-C[a][a];
	  
	    double var_a=D[a][a]+0.677;
	    double var_b=D[a][a+3]+0.904;
	  
	    D[a][a]=D[a][a]*0.181;
	    A[a]=D[a-5][a-1]+0.879;
	  
	    B[a]=C[a][a]+0.25;
	    C[a][a]=C[a-4][a-3]-A[a]*B[a]+D[a][a];
	}

    return 0;
}