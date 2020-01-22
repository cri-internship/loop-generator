#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(360, "zeros");
	int ***B = create_three_dim_int(470, 280, 870, "zeros");

	for (int d = 0; d < 870; d++)
	  for (int c = 0; c < 278; c++)
	    for (int b = 0; b < 466; b++)
	      for (int a = 0; a < 466; a++)
	      {
	        
	       int var_a=B[a][b][c]-22;
	       int var_b=B[a+4][b+2][c]/7;
	      }

    return 0;
}