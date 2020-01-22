#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(270, "ones");
	int **D = create_two_dim_int(100, 920, "ones");
	int *B = create_one_dim_int(540, "ones");
	int **E = create_two_dim_int(110, 130, "ones");
	int *A = create_one_dim_int(360, "ones");

	for (int b = 0; b < 266; b++)
	  for (int a = 0; a < 266; a++)
	  {
	    
	     C[a]=45;
	     C[a+4]=35;
	  }

    return 0;
}