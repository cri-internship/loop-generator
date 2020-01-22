#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(870, "zeros");
	double *C = create_one_dim_double(650, "zeros");
	double ***B = create_three_dim_double(570, 420, 450, "zeros");

	for (int a = 1; a < 650; a++)
	{
	  
	    A[a]=A[a-1]*0.864;
	  
	    C[a]=C[a-1]*0.505;
	  
	    A[a]=A[a+3]/0.201;
	  
	    A[a]=A[a+1]+B[a][a][a]/C[a];
	  
	    A[a]=A[a]*0.158;
	    C[a]=A[a+4]*C[a];
	}

    return 0;
}