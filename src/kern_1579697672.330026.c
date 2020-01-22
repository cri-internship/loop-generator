#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(770, "zeros");

	for (int c = 0; c < 766; c++)
	  for (int b = 0; b < 766; b++)
	    for (int a = 0; a < 766; a++)
	    {
	      
	      int var_a=A[a]+12;
	      int var_b=A[a+4]/36;
	    }

    return 0;
}