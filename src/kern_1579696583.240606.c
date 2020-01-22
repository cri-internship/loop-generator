#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(240, 200, 330, "random");

	for (int a = 0; a < 237; a++)
	{
	  
	    double var_a=A[a][a][a]/0.732;
	    double var_b=A[a][a+3][a+3]+0.072;
	}

    return 0;
}