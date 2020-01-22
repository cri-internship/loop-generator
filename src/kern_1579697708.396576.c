#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(760, 380, "zeros");
	int ***A = create_three_dim_int(590, 780, 430, "zeros");
	int *C = create_one_dim_int(880, "zeros");
	int ***D = create_three_dim_int(690, 720, 460, "zeros");

	for (int b = 0; b < 380; b++)
	  for (int a = 4; a < 760; a++)
	  {
	    
	     B[a][b]=10;
	     B[a-4][b]=29;
	  }

    return 0;
}