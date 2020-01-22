#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(100, 630, "ones");
	double *C = create_one_dim_double(560, "ones");
	double **A = create_two_dim_double(260, 40, "ones");

	for (int a = 5; a < 96; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]/0.179;
	  
	    A[a][a]=A[a-3][a-3]*B[a][a]-C[a];
	  
	    A[a][a]=A[a][a+4]+0.604;
	  
	    C[a]=C[a+1]+A[a][a]*B[a][a];
	  
	    B[a][a]=0.577;
	    B[a][a-5]=0.776;
	  
	    B[a][a]=B[a][a]+0.552*A[a][a];
	    C[a]=B[a+2][a+1]*A[a][a];
	  
	    double var_a=B[a][a]+0.669;
	    double var_b=B[a+4][a+3]*0.439;
	}

    return 0;
}