#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(20, 860, "random");
	int *C = create_one_dim_int(990, "random");
	int *D = create_one_dim_int(390, "random");
	int ***A = create_three_dim_int(140, 380, 960, "random");

	for (int b = 0; b < 386; b++)
	  for (int a = 0; a < 386; a++)
	  {
	    
	     D[a]=D[a+4]+5;
	    
	     D[a]=7;
	  }

    return 0;
}