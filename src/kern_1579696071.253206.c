#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(400, 770, 50, "zeros");
	double *C = create_one_dim_double(10, "zeros");
	double *B = create_one_dim_double(130, "zeros");
	double *D = create_one_dim_double(50, "zeros");

	for (int a = 0; a < 5; a++)
	{
	  
	    C[a]=C[a+5]*D[a]-B[a]/A[a][a][a];
	  
	    C[a]=C[a+1]-0.995;
	  
	    A[a][a][a]=A[a][a][a]+C[a];
	    D[a]=A[a+3][a+5][a+4]/0.65;
	}

    return 0;
}