#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(630, "random");
	int *A = create_one_dim_int(240, "random");

	for (int b = 0; b < 625; b++)
	  for (int a = 0; a < 625; a++)
	  {
	    
	     B[a]=B[a+5]/31;
	    
	     B[a]=A[a];
	  }

    return 0;
}