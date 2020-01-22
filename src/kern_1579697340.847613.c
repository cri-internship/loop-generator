#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(480, "ones");
	int ***D = create_three_dim_int(850, 520, 60, "ones");
	int *C = create_one_dim_int(750, "ones");
	int **A = create_two_dim_int(600, 80, "ones");

	for (int d = 0; d < 749; d++)
	  for (int c = 0; c < 749; c++)
	    for (int b = 0; b < 749; b++)
	      for (int a = 0; a < 749; a++)
	      {
	        
	       C[a]=C[a+1]*27;
	      }

    return 0;
}