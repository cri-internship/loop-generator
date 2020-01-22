#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 580, 230, "ones");
	float ***B = create_three_dim_float(60, 470, 10, "ones");
	float *C = create_one_dim_float(900, "ones");

	for (int a = 3; a < 895; a++)
	{
	  
	    C[a]=C[a-3]/0.818;
	  
	    C[a]=C[a+5]/0.183;
	}

    return 0;
}