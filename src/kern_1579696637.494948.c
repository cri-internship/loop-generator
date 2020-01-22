#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(470, 910, "random");
	int ***C = create_three_dim_int(100, 290, 240, "random");
	int *A = create_one_dim_int(470, "random");

	for (int b = 0; b < 469; b++)
	  for (int a = 0; a < 469; a++)
	  {
	    
	     int var_a=A[a]+47;
	     int var_b=A[a+1]-9;
	  }

    return 0;
}