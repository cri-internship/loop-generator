#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(70, "ones");
	int *A = create_one_dim_int(820, "ones");

	for (int b = 0; b < 70; b++)
	  for (int a = 0; a < 70; a++)
	  {
	    
	     B[a]=A[a];
	     A[a]=B[a]-A[a];
	  }

    return 0;
}