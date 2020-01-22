#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(360, 710, "random");
	double ***D = create_three_dim_double(1000, 300, 930, "random");
	double **C = create_two_dim_double(930, 280, "random");
	double **B = create_two_dim_double(1000, 550, "random");

	for (int a = 5; a < 359; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]-0.816;
	  
	    A[a][a]=A[a+1][a]/B[a][a];
	  
	    D[a][a][a]=D[a+5][a+1][a+3]-0.56;
	  
	    C[a][a]=C[a+2][a]-0.825;
	  
	    D[a][a][a]=D[a][a+4][a+1]/C[a][a]*A[a][a];
	  
	    double var_a=D[a][a][a]-0.664;
	    double var_b=D[a+3][a+1][a+3]/0.16;
	}

    return 0;
}