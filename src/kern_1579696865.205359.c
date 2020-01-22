#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(310, 720, 990, "random");
	double **C = create_two_dim_double(520, 130, "random");
	double **A = create_two_dim_double(870, 500, "random");
	double ***B = create_three_dim_double(890, 660, 220, "random");

	for (int a = 5; a < 307; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-2][a-4]+0.182;
	  
	    D[a][a][a]=D[a][a+3][a+1]+C[a][a];
	  
	    B[a][a][a]=A[a][a]/B[a][a][a]-D[a][a][a];
	    C[a][a]=A[a+4][a]+0.046-D[a][a][a];
	  
	    D[a][a][a]=D[a][a][a]-A[a][a];
	    A[a][a]=D[a-2][a-2][a-5]-C[a][a]+B[a][a][a];
	  
	    A[a][a]=C[a][a]*A[a][a];
	    A[a][a]=C[a+1][a+1]/D[a][a][a];
	  
	    D[a][a][a]=D[a][a][a]*0.748;
	  
	    double var_a=C[a][a]-0.898;
	    double var_b=C[a][a+3]-0.775;
	}

    return 0;
}