#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(920, 220, "random");
	double **A = create_two_dim_double(480, 790, "random");
	double **C = create_two_dim_double(510, 100, "random");
	double ***E = create_three_dim_double(20, 470, 860, "random");
	double **D = create_two_dim_double(990, 280, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    A[a][a]=A[a-4][a-1]/B[a][a]*D[a][a]-0.499+C[a][a];
	  
	    C[a][a]=C[a+1][a+1]*A[a][a]/B[a][a]-E[a][a][a];
	  
	    C[a][a]=E[a][a][a]/B[a][a]-A[a][a];
	    E[a][a][a]=E[a-5][a-2][a-3]*C[a][a];
	  
	    double var_a=A[a][a]+0.332;
	    double var_b=A[a+1][a+3]/0.185;
	  
	    double var_c=B[a][a]-0.827;
	    double var_d=B[a+3][a+3]-0.192;
	  
	    A[a][a]=B[a][a]*A[a][a];
	    B[a][a]=B[a+2][a+4]/A[a][a]*C[a][a];
	}

    return 0;
}