#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(180, 340, "random");
	int *B = create_one_dim_int(550, "random");
	int *C = create_one_dim_int(730, "random");

	for (int b = 3; b < 550; b++)
	  for (int a = 3; a < 550; a++)
	  {
	    
	     B[a]=B[a-3]/44;
	  }

    return 0;
}