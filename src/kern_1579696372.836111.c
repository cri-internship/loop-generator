#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(270, 840, 400, "ones");
	double ***A = create_three_dim_double(920, 350, 930, "ones");
	double ***B = create_three_dim_double(290, 730, 450, "ones");

	for (int a = 3; a < 286; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a-3]/B[a][a][a];
	  
	    B[a][a][a]=B[a+4][a+3][a+4]+A[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+5][a+1]-C[a][a][a]+B[a][a][a];
	  
	    A[a][a][a]=A[a+2][a+1][a+5]+0.77;
	  
	    double var_a=A[a][a][a]/0.064;
	    double var_b=A[a+3][a+5][a+3]-0.477;
	  
	    double var_c=B[a][a][a]+0.488;
	    double var_d=B[a+1][a][a+2]/0.918;
	}

    return 0;
}