#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(490, 240, 590, "zeros");
	double ***A = create_three_dim_double(410, 880, 810, "zeros");
	double *B = create_one_dim_double(330, "zeros");
	double ***C = create_three_dim_double(710, 500, 790, "zeros");
	double *D = create_one_dim_double(400, "zeros");

	for (int a = 5; a < 396; a++)
	{
	  
	    A[a][a][a]=A[a][a-5][a-3]+0.582;
	  
	    E[a][a][a]=E[a][a+2][a+1]-0.434;
	  
	    D[a]=0.917;
	    D[a+4]=0.192;
	  
	    double var_a=E[a][a][a]*0.439;
	    double var_b=E[a-5][a-3][a-2]*0.979;
	}

    return 0;
}