#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(770, "random");
	int *C = create_one_dim_int(510, "random");
	int *A = create_one_dim_int(330, "random");

	for (int c = 3; c < 505; c++)
	  for (int b = 3; b < 505; b++)
	    for (int a = 3; a < 505; a++)
	    {
	      
	      C[a]=49;
	      float  var_a=C[a]*2;
	      
	      B[a]=B[a+2]+C[a];
	      
	      int var_b=C[a]-8;
	      C[a]=37;
	      
	      B[a]=32;
	      
	      B[a]=C[a]-A[a];
	      A[a]=C[a+3]+23;
	    }

    return 0;
}