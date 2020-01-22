#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(620, "zeros");
	int ***B = create_three_dim_int(520, 20, 890, "zeros");

	for (int d = 0; d < 620; d++)
	  for (int c = 0; c < 620; c++)
	    for (int b = 0; b < 620; b++)
	      for (int a = 0; a < 620; a++)
	      {
	        
	       A[a]=3;
	       A[a]=44;
	      }

    return 0;
}