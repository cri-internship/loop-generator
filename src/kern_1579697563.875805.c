#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "random");
	int *C = create_one_dim_int(130, "random");
	int ***B = create_three_dim_int(290, 860, 810, "random");
	int **D = create_two_dim_int(200, 790, "random");

	for (int b = 0; b < 525; b++)
	  for (int a = 0; a < 525; a++)
	  {
	    
	     A[a]=8;
	     A[a+5]=17;
	  }

    return 0;
}