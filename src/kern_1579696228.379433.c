#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(770, "zeros");
	double ***B = create_three_dim_double(140, 80, 390, "zeros");
	double ***A = create_three_dim_double(170, 730, 10, "zeros");

	for (int a = 5; a < 170; a++)
	{
	  
	    A[a][a][a]=A[a-5][a][a-4]+0.78;
	  
	    C[a]=0.783;
	    float  var_a=C[a]/0.807;
	}

    return 0;
}