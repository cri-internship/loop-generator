#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(830, "ones");
	int *A = create_one_dim_int(440, "ones");

	for (int b = 5; b < 439; b++)
	  for (int a = 5; a < 439; a++)
	  {
	    
	     B[a]=B[a-1]/A[a];
	    
	     A[a]=A[a+1]+2;
	    
	     A[a]=12;
	    
	     int var_a=A[a]+28;
	     int var_b=A[a-2]+31;
	  }

    return 0;
}