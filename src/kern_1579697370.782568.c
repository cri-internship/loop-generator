#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(800, "random");

	for (int c = 5; c < 800; c++)
	  for (int b = 5; b < 800; b++)
	    for (int a = 5; a < 800; a++)
	    {
	      
	      A[a]=45;
	      float  var_a=A[a]*21;
	      
	      A[a]=A[a-5]+38;
	    }

    return 0;
}