#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(330, 850, 210, "ones");
	double **C = create_two_dim_double(110, 290, "ones");
	double **B = create_two_dim_double(210, 180, "ones");
	double **D = create_two_dim_double(860, 770, "ones");

	for (int a = 1; a < 210; a++)
	{
	  
	    B[a][a]=B[a-1][a]/0.104-C[a][a]+A[a][a][a];
	  
	    A[a][a][a]=A[a+1][a+2][a+5]-0.491;
	  
	    D[a][a]=D[a+3][a+3]*0.421;
	  
	    D[a][a]=D[a+3][a+5]/B[a][a];
	  
	    A[a][a][a]=D[a][a]+B[a][a];
	    D[a][a]=D[a+1][a]/A[a][a][a]+C[a][a]-B[a][a];
	}

    return 0;
}