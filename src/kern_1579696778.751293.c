#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(700, 60, "zeros");
	double **C = create_two_dim_double(100, 1000, "zeros");
	double **B = create_two_dim_double(670, 970, "zeros");
	double **A = create_two_dim_double(420, 920, "zeros");
	double ***E = create_three_dim_double(830, 170, 300, "zeros");

	for (int a = 5; a < 100; a++)
	{
	  
	    B[a][a]=B[a-5][a-1]+0.218;
	  
	    C[a][a]=C[a-5][a-1]+0.921;
	  
	    D[a][a]=D[a+4][a+3]/0.218;
	  
	    A[a][a]=B[a][a]-C[a][a]*D[a][a]/E[a][a][a];
	    A[a+1][a+2]=B[a][a]-D[a][a]+C[a][a]/E[a][a][a];
	  
	    D[a][a]=0.777;
	}

    return 0;
}