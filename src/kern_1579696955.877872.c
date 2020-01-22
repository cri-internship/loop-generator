#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(150, 800, "ones");
	double *B = create_one_dim_double(210, "ones");

	for (int a = 5; a < 145; a++)
	{
	  
	    B[a]=B[a+4]-A[a][a];
	  
	    A[a][a]=0.546;
	    A[a][a-5]=0.166;
	  
	    A[a][a]=A[a][a]*B[a];
	    B[a]=A[a+5][a+5]/B[a];
	  
	    double var_a=A[a][a]-0.55;
	    double var_b=A[a][a+3]-0.521;
	}

    return 0;
}