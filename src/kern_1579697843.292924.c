#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(30, 930, "random");
	int ***A = create_three_dim_int(640, 740, 450, "random");

	for (int d = 2; d < 930; d++)
	  for (int c = 0; c < 30; c++)
	    for (int b = 0; b < 30; b++)
	      for (int a = 0; a < 30; a++)
	      {
	        
	       B[a][b]=B[a][b-2]-23;
	      }

    return 0;
}