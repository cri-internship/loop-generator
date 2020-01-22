#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(560, 330, "random");
	int *C = create_one_dim_int(230, "random");
	int **B = create_two_dim_int(590, 960, "random");

	for (int d = 0; d < 229; d++)
	  for (int c = 0; c < 229; c++)
	    for (int b = 0; b < 229; b++)
	      for (int a = 0; a < 229; a++)
	      {
	        
	       C[a]=C[a+1]*14;
	      }

    return 0;
}