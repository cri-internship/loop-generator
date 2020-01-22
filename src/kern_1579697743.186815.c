#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(700, 510, "random");
	double **B = create_two_dim_double(480, 850, "random");

	for (int a = 5; a < 475; a++)
	{
	  
	    B[a][a]=B[a-5][a]*0.984;
	  
	    B[a][a]=B[a][a+5]+0.043;
	  
	    A[a][a]=0.451;
	    A[a-4][a-2]=0.578;
	  
	    B[a][a]=B[a][a]*0.182;
	    A[a][a]=B[a+1][a+5]/A[a][a];
	  
	    A[a][a]=A[a][a]-B[a][a];
	    B[a][a]=A[a+2][a+3]-0.086;
	  
	    A[a][a]=A[a][a]*0.699;
	    A[a][a]=A[a-3][a]*B[a][a];
	  
	    double var_a=B[a][a]+0.374;
	    double var_b=B[a-1][a-2]+0.349;
	}

    return 0;
}