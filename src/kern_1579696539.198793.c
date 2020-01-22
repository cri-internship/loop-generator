#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(420, 290, 220, "ones");
	double **C = create_two_dim_double(360, 760, "ones");
	double ***A = create_three_dim_double(40, 120, 730, "ones");

	for (int a = 5; a < 37; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-4][a-5]/0.919;
	  
	    A[a][a][a]=A[a-4][a-1][a-4]/B[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+3][a+2]*C[a][a]/B[a][a][a];
	  
	    C[a][a]=C[a+1][a+2]*A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]-C[a][a];
	    C[a][a]=A[a+1][a+2][a+3]/B[a][a][a];
	}

    return 0;
}