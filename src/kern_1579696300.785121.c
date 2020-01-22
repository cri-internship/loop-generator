#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(820, 380, "random");
	double **B = create_two_dim_double(580, 690, "random");
	double *C = create_one_dim_double(700, "random");

	for (int a = 0; a < 576; a++)
	{
	  
	    C[a]=C[a+4]/0.947;
	  
	    B[a][a]=0.706;
	    B[a][a+4]=0.373;
	}

    return 0;
}