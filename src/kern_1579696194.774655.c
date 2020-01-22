#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(710, "ones");
	int *B = create_one_dim_int(720, "ones");

	for (int c = 0; c < 715; c++)
	  for (int b = 0; b < 715; b++)
	    for (int a = 0; a < 715; a++)
	    {
	      
	      int var_a=B[a]+3;
	      B[a]=33;
	      
	      B[a]=B[a+5]*A[a];
	    }

    return 0;
}