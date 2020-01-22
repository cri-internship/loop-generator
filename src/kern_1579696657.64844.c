#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(990, 570, 130, "zeros");
	double **C = create_two_dim_double(960, 260, "zeros");
	double ***A = create_three_dim_double(190, 290, 630, "zeros");
	double ***D = create_three_dim_double(820, 640, 380, "zeros");

	for (int a = 3; a < 185; a++)
	{
	  
	    C[a][a]=C[a-3][a]/0.356;
	  
	    C[a][a]=C[a+5][a+3]*D[a][a][a]/A[a][a][a]+0.136;
	  
	    A[a][a][a]=A[a+3][a+1][a+5]/C[a][a]*B[a][a][a]+C[a][a];
	  
	    B[a][a][a]=C[a][a];
	    B[a+1][a+2][a+4]=D[a][a][a]/C[a][a]-A[a][a][a];
	  
	    A[a][a][a]=D[a][a][a]-C[a][a];
	    D[a][a][a]=D[a][a+2][a]/A[a][a][a]+C[a][a];
	}

    return 0;
}