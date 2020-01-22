#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(730, "ones");
	int *C = create_one_dim_int(410, "ones");
	int *D = create_one_dim_int(310, "ones");
	int *A = create_one_dim_int(680, "ones");

	for (int c = 0; c < 409; c++)
	  for (int b = 0; b < 409; b++)
	    for (int a = 0; a < 409; a++)
	    {
	      
	      int var_a=C[a]/3;
	      int var_b=C[a+1]+4;
	    }

    return 0;
}