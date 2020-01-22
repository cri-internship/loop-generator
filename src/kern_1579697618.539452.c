#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(370, "zeros");

	for (int c = 5; c < 368; c++)
	  for (int b = 5; b < 368; b++)
	    for (int a = 5; a < 368; a++)
	    {
	      
	      A[a]=A[a+2]-31;
	      
	      A[a]=9;
	    }

    return 0;
}