#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(710, 560, "zeros");
	double ***C = create_three_dim_double(260, 510, 540, "zeros");
	double ***B = create_three_dim_double(320, 300, 300, "zeros");

	for (int a = 4; a < 255; a++)
	{
	  
	    B[a][a][a]=B[a-1][a][a-4]/A[a][a]-0.009;
	  
	    A[a][a]=A[a+1][a+5]/B[a][a][a]+C[a][a][a];
	  
	    C[a][a][a]=C[a+4][a+4][a+4]/A[a][a];
	  
	    C[a][a][a]=0.061;
	  
	    double var_a=C[a][a][a]*0.035;
	    double var_b=C[a+3][a+1][a+4]*0.787;
	  
	    B[a][a][a]=A[a][a]+B[a][a][a];
	    A[a][a]=A[a][a+1]-B[a][a][a]/C[a][a][a];
	  
	    C[a][a][a]=A[a][a]/B[a][a][a];
	    A[a][a]=A[a+5][a+2]*B[a][a][a]+C[a][a][a];
	}

    return 0;
}