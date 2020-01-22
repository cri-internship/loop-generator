#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(390, "zeros");
	int **A = create_two_dim_int(370, 470, "zeros");
	int ***C = create_three_dim_int(870, 830, 360, "zeros");

	for (int b = 0; b < 386; b++)
	  for (int a = 0; a < 386; a++)
	  {
	    
	     B[a]=42;
	     B[a+4]=22;
	  }

    return 0;
}