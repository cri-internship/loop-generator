#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(880, 10, "random");
	double **A = create_two_dim_double(660, 250, "random");
	double **D = create_two_dim_double(890, 770, "random");
	double *B = create_one_dim_double(540, "random");
	double ***C = create_three_dim_double(540, 90, 180, "random");

	for (int a = 5; a < 540; a++)
	{
	  
	    B[a]=B[a-5]*0.975;
	  
	    D[a][a]=D[a][a+5]/0.888;
	  
	    A[a][a]=B[a];
	    A[a+4][a+4]=D[a][a]/C[a][a][a]-E[a][a];
	  
	    D[a][a]=A[a][a]*A[a][a]-B[a]/E[a][a];
	  
	    double var_a=A[a][a]+0.672;
	    double var_b=A[a][a+3]-0.515;
	}

    return 0;
}