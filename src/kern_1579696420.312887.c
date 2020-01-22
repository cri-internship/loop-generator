#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(330, "ones");

	for (int b = 0; b < 326; b++)
	  for (int a = 0; a < 326; a++)
	  {
	    
	     A[a]=A[a+3]-48;
	    
	     A[a]=A[a+4]-23;
	    
	     int var_a=A[a]-3;
	     int var_b=A[a]+40;
	  }

    return 0;
}