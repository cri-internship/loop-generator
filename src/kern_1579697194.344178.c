#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(1000, 250, 970, "zeros");
	double **A = create_two_dim_double(640, 780, "zeros");
	double **E = create_two_dim_double(200, 380, "zeros");
	double ***D = create_three_dim_double(110, 200, 590, "zeros");
	double ***B = create_three_dim_double(120, 620, 470, "zeros");

	for (int a = 5; a < 105; a++)
	{
	  
	    D[a][a][a]=D[a][a+5][a+5]+0.73;
	  
	    A[a][a]=A[a+3][a+5]-0.585;
	  
	    E[a][a]=E[a+1][a+3]/D[a][a][a]-B[a][a][a]+C[a][a][a];
	  
	    B[a][a][a]=B[a+3][a+4][a+1]+A[a][a]*E[a][a]/D[a][a][a];
	  
	    C[a][a][a]=C[a+3][a][a+2]/A[a][a]+D[a][a][a]-0.308;
	  
	    A[a][a]=B[a][a][a]+A[a][a]/E[a][a]-D[a][a][a];
	    D[a][a][a]=B[a-3][a-5][a-4]+C[a][a][a]-E[a][a];
	}

    return 0;
}