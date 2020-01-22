#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(340, "random");
	int *B = create_one_dim_int(980, "random");

	for (int b = 4; b < 340; b++)
	  for (int a = 4; a < 340; a++)
	  {
	    
	     A[a]=A[a-1]*31;
	    
	     B[a]=B[a-4]-8;
	    
	     int var_a=B[a]*50;
	     int var_b=B[a-1]-5;
	  }

    return 0;
}