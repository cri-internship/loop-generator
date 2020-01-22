#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(30, 1000, "random");
	double ***D = create_three_dim_double(130, 750, 850, "random");
	double ***C = create_three_dim_double(540, 260, 60, "random");
	double **A = create_two_dim_double(1000, 370, "random");
	double *B = create_one_dim_double(760, "random");

	for (int a = 5; a < 30; a++)
	{
	  
	    E[a][a]=E[a-1][a-4]+D[a][a][a]-0.045;
	  
	    C[a][a][a]=C[a][a-5][a-5]/0.178;
	  
	    A[a][a]=A[a-2][a-4]-0.146;
	  
	    E[a][a]=C[a][a][a];
	  
	    double var_a=E[a][a]*0.247;
	    double var_b=E[a-5][a]+0.205;
	  
	    B[a]=D[a][a][a]-E[a][a]/B[a]+A[a][a]*E[a][a];
	    D[a][a][a]=D[a+3][a+3][a+2]/C[a][a][a]*B[a]+A[a][a];
	}

    return 0;
}