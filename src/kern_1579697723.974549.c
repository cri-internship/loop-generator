#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(190, 790, "ones");
	double **B = create_two_dim_double(810, 830, "ones");
	double ***C = create_three_dim_double(130, 410, 270, "ones");

	for (int a = 5; a < 126; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-5][a-4]/0.445;
	  
	    B[a][a]=0.383;
	    B[a][a+2]=0.314;
	  
	    double var_a=A[a][a]+0.663;
	    double var_b=A[a+4][a+3]/0.16;
	  
	    double var_c=C[a][a][a]/0.573;
	    double var_d=C[a+1][a+4][a+2]*0.015;
	}

    return 0;
}