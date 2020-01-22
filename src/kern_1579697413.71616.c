#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(420, "random");
	int *A = create_one_dim_int(150, "random");
	int *B = create_one_dim_int(800, "random");

	for (int b = 4; b < 150; b++)
	  for (int a = 4; a < 150; a++)
	  {
	    
	     B[a]=B[a-4]*46;
	    
	     A[a]=A[a-4]/45;
	  }

    return 0;
}