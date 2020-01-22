#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(120, "zeros");
	int *A = create_one_dim_int(670, "zeros");

	for (int b = 5; b < 118; b++)
	  for (int a = 5; a < 118; a++)
	  {
	    
	     A[a]=A[a-5]+47;
	    
	     B[a]=B[a+2]+28;
	    
	     A[a]=41;
	    
	     int var_a=A[a]*14;
	     int var_b=A[a+4]+32;
	    
	     int var_c=A[a]*50;
	  }

    return 0;
}