#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(490, "zeros");
	double *D = create_one_dim_double(300, "zeros");
	double ***A = create_three_dim_double(110, 820, 220, "zeros");
	double *B = create_one_dim_double(10, "zeros");

	for (int a = 4; a < 10; a++)
	{
	  
	    D[a]=D[a+5]/0.469;
	  
	    D[a]=B[a]+A[a][a][a]/C[a];
	  
	    B[a]=0.823;
	    B[a-4]=0.914;
	  
	    A[a][a][a]=D[a]-B[a]*A[a][a][a]/C[a];
	    C[a]=D[a-3]+0.611;
	}

    return 0;
}