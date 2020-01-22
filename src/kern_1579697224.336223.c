#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(530, 470, "ones");
	int *C = create_one_dim_int(710, "ones");
	int *A = create_one_dim_int(700, "ones");

	for (int b = 0; b < 695; b++)
	  for (int a = 0; a < 695; a++)
	  {
	    
	     A[a]=A[a+5]+8;
	  }

    return 0;
}