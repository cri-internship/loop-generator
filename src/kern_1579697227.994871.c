#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(560, 160, 930, "ones");
	double *B = create_one_dim_double(710, "ones");
	double **A = create_two_dim_double(450, 770, "ones");
	double ***D = create_three_dim_double(300, 700, 370, "ones");

	for (int a = 5; a < 448; a++)
	{
	  
	    B[a]=B[a-5]/C[a][a][a]+A[a][a]-0.45;
	  
	    A[a][a]=A[a+2][a+1]*B[a]/B[a]-C[a][a][a];
	  
	    double var_a=C[a][a][a]+0.164;
	    C[a][a][a]=0.58;
	  
	    C[a][a][a]=C[a+3][a+4][a+2]-B[a]/D[a][a][a]+A[a][a];
	  
	    D[a][a][a]=A[a][a]+0.384;
	    C[a][a][a]=A[a+1][a+2]/C[a][a][a]+B[a]*D[a][a][a];
	  
	    double var_b=C[a][a][a]*0.332;
	    double var_c=C[a+4][a][a+2]/0.541;
	  
	    double var_d=B[a]+0.91;
	    double var_e=B[a-4]-0.805;
	}

    return 0;
}