#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(360, "ones");
	int *B = create_one_dim_int(710, "ones");

	for (int c = 4; c < 358; c++)
	  for (int b = 4; b < 358; b++)
	    for (int a = 4; a < 358; a++)
	    {
	      
	      A[a]=A[a-4]+10;
	      
	      A[a]=A[a+2]-38;
	      
	      B[a]=A[a];
	      B[a-2]=6;
	      
	      B[a]=25;
	      
	      int var_a=A[a]*5;
	    }

    return 0;
}