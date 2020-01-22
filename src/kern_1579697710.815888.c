#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(900, "zeros");
	int *A = create_one_dim_int(930, "zeros");
	int *B = create_one_dim_int(350, "zeros");

	for (int c = 0; c < 898; c++)
	  for (int b = 0; b < 898; b++)
	    for (int a = 0; a < 898; a++)
	    {
	      
	      A[a]=A[a+3]/26;
	      
	      int var_a=C[a]+23;
	      int var_b=C[a+2]/9;
	    }

    return 0;
}