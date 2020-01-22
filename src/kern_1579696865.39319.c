#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(100, 940, 790, "ones");
	int **B = create_two_dim_int(850, 590, "ones");

	for (int b = 4; b < 590; b++)
	  for (int a = 1; a < 850; a++)
	  {
	    
	     int var_a=B[a][b]-3;
	     int var_b=B[a-1][b-4]*22;
	  }

    return 0;
}