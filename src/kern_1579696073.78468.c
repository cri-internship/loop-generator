#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(430, 910, "zeros");
	double ***B = create_three_dim_double(320, 310, 320, "zeros");
	double **A = create_two_dim_double(640, 860, "zeros");
	double ***D = create_three_dim_double(730, 340, 970, "zeros");

	for (int a = 5; a < 320; a++)
	{
	  
	    C[a][a]=C[a-4][a-1]-0.115;
	  
	    A[a][a]=A[a-2][a-5]*B[a][a][a]/D[a][a][a];
	  
	    B[a][a][a]=B[a-4][a-2][a-2]/A[a][a]-C[a][a]+C[a][a];
	  
	    D[a][a][a]=D[a-3][a-3][a-3]*C[a][a]/B[a][a][a];
	  
	    D[a][a][a]=C[a][a]-A[a][a];
	  
	    A[a][a]=B[a][a][a];
	  
	    double var_a=B[a][a][a]-0.933;
	    double var_b=B[a][a-1][a-5]-0.042;
	}

    return 0;
}