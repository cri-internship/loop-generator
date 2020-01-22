#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(880, 780, 420, "random");
	double ***A = create_three_dim_double(290, 260, 60, "random");
	double **D = create_two_dim_double(480, 350, "random");
	double **C = create_two_dim_double(190, 840, "random");
	double *E = create_one_dim_double(320, "random");

	for (int a = 5; a < 190; a++)
	{
	  
	    C[a][a]=C[a][a-5]-A[a][a][a]/B[a][a][a];
	  
	    B[a][a][a]=B[a-1][a-2][a]-D[a][a]+E[a]/C[a][a];
	  
	    C[a][a]=C[a-1][a-3]-0.891;
	  
	    D[a][a]=D[a+1][a+3]/0.129;
	  
	    D[a][a]=E[a]/C[a][a]+B[a][a][a];
	    E[a]=A[a][a][a];
	  
	    B[a][a][a]=E[a]+C[a][a]*D[a][a]/A[a][a][a];
	  
	    E[a]=0.022;
	}

    return 0;
}