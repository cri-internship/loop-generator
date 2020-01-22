#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(490, 830, "ones");
	double ***B = create_three_dim_double(560, 300, 720, "ones");
	double ***C = create_three_dim_double(500, 950, 650, "ones");
	double **D = create_two_dim_double(770, 870, "ones");
	double ***A = create_three_dim_double(720, 180, 390, "ones");

	for (int a = 3; a < 486; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-1][a]/0.848;
	  
	    A[a][a][a]=A[a-2][a][a]-0.213;
	  
	    A[a][a][a]=A[a+3][a+5][a]*0.826;
	  
	    E[a][a]=0.919;
	    E[a-3][a-2]=0.801;
	  
	    C[a][a][a]=E[a][a]/C[a][a][a];
	    D[a][a]=E[a-2][a]-A[a][a][a]*B[a][a][a];
	  
	    double var_a=E[a][a]*0.043;
	    double var_b=E[a+4][a]-0.921;
	}

    return 0;
}