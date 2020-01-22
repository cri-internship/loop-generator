#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(130, 330, 600, "random");
	int *A = create_one_dim_int(270, "random");
	int *B = create_one_dim_int(230, "random");

	for (int b = 0; b < 227; b++)
	  for (int a = 0; a < 227; a++)
	  {
	    
	     B[a]=35;
	     float  var_a=B[a]*3;
	    
	     A[a]=A[a+1]/2;
	    
	     B[a]=38;
	  }

    return 0;
}