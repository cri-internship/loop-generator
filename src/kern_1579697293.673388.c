#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(500, 320, 220, "ones");
	double ***C = create_three_dim_double(420, 550, 130, "ones");
	double **A = create_two_dim_double(930, 660, "ones");

	for (int a = 5; a < 416; a++)
	{
	  
	    C[a][a][a]=C[a][a-4][a-4]+0.94;
	  
	    C[a][a][a]=C[a+3][a+4][a+3]+0.324;
	  
	    C[a][a][a]=B[a][a][a]-C[a][a][a]/A[a][a];
	    A[a][a]=B[a+3][a+3][a+3]-C[a][a][a]*A[a][a];
	  
	    B[a][a][a]=A[a][a]*B[a][a][a]-C[a][a][a];
	    B[a][a][a]=A[a+5][a+4]-B[a][a][a]*C[a][a][a];
	  
	    double var_a=A[a][a]*0.589;
	    double var_b=A[a-1][a-4]+0.065;
	  
	    double var_c=B[a][a][a]*0.451;
	    double var_d=B[a+5][a+2][a+4]/0.771;
	  
	    B[a][a][a]=C[a][a][a]/B[a][a][a]+A[a][a];
	    C[a][a][a]=C[a][a-5][a-3]*0.172+B[a][a][a];
	}

    return 0;
}