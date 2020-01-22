#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(50, 610, 800, "random");
	double *B = create_one_dim_double(690, "random");
	double *C = create_one_dim_double(510, "random");

	for (int a = 0; a < 47; a++)
	{
	  
	    C[a]=C[a+2]*0.396;
	  
	    C[a]=A[a][a][a]-C[a]/B[a];
	    A[a][a][a]=A[a+3][a+2][a+2]/B[a];
	  
	    B[a]=B[a]*A[a][a][a]/A[a][a][a];
	    B[a]=B[a+3]/0.82;
	}

    return 0;
}