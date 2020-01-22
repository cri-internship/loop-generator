#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(570, 290, "zeros");
	int ***D = create_three_dim_int(50, 970, 370, "zeros");
	int **C = create_two_dim_int(940, 690, "zeros");
	int *A = create_one_dim_int(340, "zeros");

	for (int d = 1; d < 340; d++)
	  for (int c = 1; c < 340; c++)
	    for (int b = 1; b < 340; b++)
	      for (int a = 1; a < 340; a++)
	      {
	        
	       int var_a=A[a]/36;
	       int var_b=A[a-1]-3;
	      }

    return 0;
}