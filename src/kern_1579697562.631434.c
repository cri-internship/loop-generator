#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(390, 350, 740, "zeros");
	double ***D = create_three_dim_double(550, 580, 740, "zeros");
	double ***B = create_three_dim_double(900, 330, 640, "zeros");
	double **C = create_two_dim_double(210, 150, "zeros");
	double **A = create_two_dim_double(270, 700, "zeros");

	for (int a = 2; a < 207; a++)
	{
	  
	    C[a][a]=C[a+1][a]/D[a][a][a]-E[a][a][a];
	  
	    C[a][a]=C[a+2][a+3]-0.23;
	  
	    D[a][a][a]=D[a][a+4][a+1]*B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+3][a+3]-0.14;
	  
	    E[a][a][a]=A[a][a]*0.317;
	    E[a+1][a+4][a+1]=C[a][a]-A[a][a];
	  
	    double var_a=E[a][a][a]+0.24;
	    double var_b=E[a+3][a+2][a]-0.777;
	}

    return 0;
}