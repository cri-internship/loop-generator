#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(290, 980, "ones");
	double *C = create_one_dim_double(690, "ones");
	double ***D = create_three_dim_double(270, 70, 390, "ones");
	double *B = create_one_dim_double(160, "ones");
	double **A = create_two_dim_double(820, 460, "ones");

	for (int a = 5; a < 158; a++)
	{
	  
	    E[a][a]=E[a-4][a-4]+0.216;
	  
	    E[a][a]=E[a+5][a+3]/0.271;
	  
	    B[a]=B[a+2]-D[a][a][a]+A[a][a]/E[a][a]*C[a];
	  
	    D[a][a][a]=B[a]/C[a];
	    D[a][a+3][a]=E[a][a]+C[a];
	  
	    A[a][a]=B[a]+C[a]-A[a][a];
	}

    return 0;
}