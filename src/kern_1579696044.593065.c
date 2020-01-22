#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(710, "ones");
	int *A = create_one_dim_int(850, "ones");

	for (int b = 3; b < 710; b++)
	  for (int a = 3; a < 710; a++)
	  {
	    
	     B[a]=B[a-3]+A[a];
	    
	     A[a]=B[a]-A[a];
	    
	     A[a]=6;
	  }

    return 0;
}