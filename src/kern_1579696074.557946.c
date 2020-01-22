#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(130, 270, "zeros");
	double ***B = create_three_dim_double(610, 720, 140, "zeros");
	double **A = create_two_dim_double(40, 850, "zeros");

	for (int a = 5; a < 40; a++)
	{
	  
	    A[a][a]=A[a-4][a-1]*0.443;
	  
	    B[a][a][a]=B[a+4][a+1][a]*0.069;
	  
	    B[a][a][a]=C[a][a];
	  
	    C[a][a]=0.858;
	    C[a+4][a+5]=0.459;
	  
	    C[a][a]=0.439;
	  
	    double var_a=C[a][a]+0.926;
	    double var_b=C[a+2][a+1]/0.187;
	}

    return 0;
}