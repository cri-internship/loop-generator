#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(550, 280, "ones");
	double **A = create_two_dim_double(170, 560, "ones");
	double ***E = create_three_dim_double(300, 340, 450, "ones");
	double **C = create_two_dim_double(860, 650, "ones");
	double *B = create_one_dim_double(230, "ones");

	for (int a = 5; a < 170; a++)
	{
	  
	    B[a]=B[a-2]+C[a][a];
	  
	    C[a][a]=C[a-2][a-1]+0.346;
	  
	    B[a]=A[a][a]*D[a][a]+E[a][a][a]/C[a][a];
	  
	    C[a][a]=0.998;
	  
	    A[a][a]=0.688;
	    A[a-4][a-4]=0.851;
	}

    return 0;
}