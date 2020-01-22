#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(340, "ones");
	int ***A = create_three_dim_int(330, 830, 540, "ones");
	int **C = create_two_dim_int(350, 820, "ones");

	for (int d = 3; d < 340; d++)
	  for (int c = 3; c < 340; c++)
	    for (int b = 3; b < 340; b++)
	      for (int a = 3; a < 340; a++)
	      {
	        
	       B[a]=B[a-3]-40;
	      }

    return 0;
}