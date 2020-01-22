#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(990, "random");

	for (int c = 0; c < 988; c++)
	  for (int b = 0; b < 988; b++)
	    for (int a = 0; a < 988; a++)
	    {
	      
	      int var_a=A[a]/24;
	      int var_b=A[a+2]+20;
	    }

    return 0;
}