#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(160, 920, "ones");
	double ***A = create_three_dim_double(600, 520, 1000, "ones");
	double *B = create_one_dim_double(650, "ones");
	double *D = create_one_dim_double(70, "ones");

	for (int a = 5; a < 70; a++)
	{
	  
	    C[a][a]=C[a][a-5]-0.19;
	  
	    B[a]=A[a][a][a]/C[a][a]-D[a];
	    C[a][a]=B[a]-D[a]/A[a][a][a]+C[a][a];
	  
	    D[a]=D[a-5]/0.297;
	  
	    D[a]=D[a-2]+0.63;
	  
	    C[a][a]=C[a-2][a-3]-0.946;
	  
	    A[a][a][a]=B[a]/D[a];
	    B[a]=B[a-5]/C[a][a]-A[a][a][a]+D[a];
	  
	    D[a]=C[a][a]-B[a];
	    C[a][a]=C[a-3][a-4]/B[a]+D[a];
	}

    return 0;
}