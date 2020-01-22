#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(400, 250, "random");
	int *B = create_one_dim_int(10, "random");
	int *C = create_one_dim_int(670, "random");

	for (int c = 0; c < 9; c++)
	  for (int b = 0; b < 9; b++)
	    for (int a = 0; a < 9; a++)
	    {
	      
	      C[a]=30;
	      float  var_a=C[a]*29;
	      
	      B[a]=9;
	      B[a+1]=27;
	    }

    return 0;
}