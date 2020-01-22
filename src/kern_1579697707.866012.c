#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(870, 170, "zeros");
	double ***D = create_three_dim_double(140, 910, 850, "zeros");
	double ***A = create_three_dim_double(740, 640, 650, "zeros");
	double ***B = create_three_dim_double(900, 340, 170, "zeros");
	double **E = create_two_dim_double(50, 380, "zeros");

	for (int a = 4; a < 45; a++)
	{
	  
	    C[a][a]=C[a-1][a-4]-A[a][a][a]*D[a][a][a]/E[a][a]+B[a][a][a];
	  
	    D[a][a][a]=D[a+1][a][a+5]-0.376;
	  
	    E[a][a]=E[a+3][a+5]+0.758;
	  
	    A[a][a][a]=0.126;
	    A[a+5][a+5][a+4]=0.441;
	  
	    C[a][a]=E[a][a]*B[a][a][a]+A[a][a][a];
	  
	    double var_a=B[a][a][a]/0.353;
	    double var_b=B[a-4][a-1][a-1]-0.412;
	}

    return 0;
}