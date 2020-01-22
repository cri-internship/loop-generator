#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(760, "random");
	int *B = create_one_dim_int(700, "random");

	for (int b = 3; b < 700; b++)
	  for (int a = 3; a < 700; a++)
	  {
	    
	     B[a]=B[a-1]+41;
	    
	     int var_a=B[a]/8;
	     int var_b=B[a-3]/33;
	  }

    return 0;
}