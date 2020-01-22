#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(40, 190, 10, "ones");
	double ***B = create_three_dim_double(20, 120, 650, "ones");

	for (int a = 5; a < 20; a++)
	{
	  
	    double var_a=B[a][a][a]*0.588;
	    double var_b=B[a-3][a-2][a-5]*0.715;
	}

    return 0;
}