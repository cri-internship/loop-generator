#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(250, "random");
	int *A = create_one_dim_int(280, "random");

	for (int b = 4; b < 248; b++)
	  for (int a = 4; a < 248; a++)
	  {
	    
	     B[a]=8;
	     float  var_a=B[a]/34;
	    
	     B[a]=B[a-4]-A[a];
	    
	     B[a]=B[a-2]*17;
	    
	     A[a]=A[a+4]+B[a];
	    
	     A[a]=A[a+1]/B[a];
	    
	     B[a]=B[a+2]+23;
	    
	     B[a]=A[a]/B[a];
	     A[a]=A[a]*B[a];
	  }

    return 0;
}