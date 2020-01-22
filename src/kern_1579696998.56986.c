#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(920, 710, "ones");
	int ***A = create_three_dim_int(990, 180, 240, "ones");
	int ***B = create_three_dim_int(490, 760, 220, "ones");
	int ***C = create_three_dim_int(970, 80, 890, "ones");

	for (int b = 0; b < 757; b++)
	  for (int a = 0; a < 487; a++)
	  {
	    
	     B[a][b][a]=27/C[a][b][a];
	     B[a+3][b+3][a+2]=4;
	  }

    return 0;
}