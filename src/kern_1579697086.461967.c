#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(890, 440, 680, "zeros");
	double ***B = create_three_dim_double(1000, 520, 600, "zeros");
	double **C = create_two_dim_double(440, 120, "zeros");
	double ***A = create_three_dim_double(30, 790, 360, "zeros");
	double ***D = create_three_dim_double(500, 40, 680, "zeros");

	for (int a = 5; a < 30; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-5][a]+D[a][a][a]/E[a][a][a];
	  
	    A[a][a][a]=A[a-4][a-2][a-4]*0.982;
	  
	    D[a][a][a]=D[a-4][a-4][a-5]+B[a][a][a];
	  
	    D[a][a][a]=D[a+3][a][a+1]+0.408;
	  
	    C[a][a]=A[a][a][a];
	    C[a+2][a]=B[a][a][a]/D[a][a][a];
	  
	    C[a][a]=E[a][a][a]/C[a][a]*C[a][a]-B[a][a][a]+A[a][a][a];
	    D[a][a][a]=E[a][a][a+2]-C[a][a]/B[a][a][a]+A[a][a][a]*D[a][a][a];
	}

    return 0;
}