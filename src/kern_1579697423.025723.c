#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(80, "ones");
	int ***B = create_three_dim_int(280, 720, 230, "ones");
	int ***A = create_three_dim_int(800, 830, 120, "ones");

	for (int d = 3; d < 120; d++)
	  for (int c = 2; c < 830; c++)
	    for (int b = 0; b < 800; b++)
	      for (int a = 0; a < 800; a++)
	      {
	        
	       int var_a=A[a][b][c]-27;
	       int var_b=A[a][b-2][c-3]+23;
	      }

    return 0;
}