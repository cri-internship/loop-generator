#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(30, "ones");

	for (int b = 4; b < 30; b++)
	  for (int a = 4; a < 30; a++)
	  {
	    
	     A[a]=4;
	     float  var_a=A[a]/40;
	    
	     A[a]=A[a-4]-27;
	    
	     int var_b=A[a]-37;
	     int var_c=A[a-2]*38;
	  }

    return 0;
}