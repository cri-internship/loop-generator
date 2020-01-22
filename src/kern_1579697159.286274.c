#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(240, "ones");
	int **A = create_two_dim_int(520, 640, "ones");
	int **B = create_two_dim_int(880, 660, "ones");
	int *C = create_one_dim_int(630, "ones");

	for (int d = 0; d < 636; d++)
	  for (int c = 5; c < 515; c++)
	    for (int b = 5; b < 515; b++)
	      for (int a = 5; a < 515; a++)
	      {
	        
	       C[a]=C[a-5]+9;
	        
	       A[a][b]=33;
	       A[a+5][b+4]=14;
	      }

    return 0;
}