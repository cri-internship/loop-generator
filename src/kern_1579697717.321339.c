#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(30, "ones");
	double ***A = create_three_dim_double(940, 990, 840, "ones");
	double *C = create_one_dim_double(340, "ones");
	double *B = create_one_dim_double(650, "ones");
	double **E = create_two_dim_double(160, 590, "ones");

	for (int a = 3; a < 30; a++)
	{
	  
	    D[a]=D[a-3]/C[a]*A[a][a][a]-E[a][a]+B[a];
	  
	    E[a][a]=E[a+5][a+5]/0.517;
	  
	    E[a][a]=D[a]-A[a][a][a]/B[a]+D[a];
	  
	    double var_a=A[a][a][a]*0.556;
	    double var_b=A[a+5][a+3][a+1]-0.739;
	}

    return 0;
}