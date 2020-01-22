#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(170, 130, "zeros");

	for (int d = 4; d < 130; d++)
	  for (int c = 4; c < 170; c++)
	    for (int b = 4; b < 170; b++)
	      for (int a = 4; a < 170; a++)
	      {
	        
	       A[a][b]=A[a][b-4]/48;
	        
	       A[a][b]=6;
	      }

    return 0;
}