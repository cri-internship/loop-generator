#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(330, 410, 200, "ones");
	double ***A = create_three_dim_double(890, 360, 670, "ones");

	for (int a = 0; a < 888; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+2][a+2]/B[a][a][a];
	}

    return 0;
}