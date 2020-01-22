#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(140, "zeros");
	int *A = create_one_dim_int(520, "zeros");
	int ***B = create_three_dim_int(960, 710, 510, "zeros");

	for (int d = 0; d < 518; d++)
	  for (int c = 0; c < 518; c++)
	    for (int b = 0; b < 518; b++)
	      for (int a = 0; a < 518; a++)
	      {
	        
	       A[a]=10;
	       float  var_a=A[a]*22;
	        
	       A[a]=B[a][b][c];
	      }

    return 0;
}