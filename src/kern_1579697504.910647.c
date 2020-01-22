#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(850, 440, "ones");

	for (int a = 5; a < 845; a++)
	{
	  
	    A[a][a]=A[a+4][a+3]+0.846;
	  
	    A[a][a]=A[a+5][a+3]-0.782;
	  
	    double var_a=A[a][a]-0.03;
	    double var_b=A[a][a+1]/0.265;
	  
	    double var_c=A[a][a]*0.439;
	    double var_d=A[a][a-5]+0.726;
	}

    return 0;
}