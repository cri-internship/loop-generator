#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(400, 790, "zeros");
	int **B = create_two_dim_int(450, 210, "zeros");

	for (int d = 4; d < 790; d++)
	  for (int c = 5; c < 400; c++)
	    for (int b = 5; b < 400; b++)
	      for (int a = 5; a < 400; a++)
	      {
	        
	       A[a][b]=A[a-5][b-4]+B[a][b];
	      }

    return 0;
}