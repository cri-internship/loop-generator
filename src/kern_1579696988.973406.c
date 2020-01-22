#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(380, 170, "ones");
	int ***C = create_three_dim_int(960, 190, 230, "ones");
	int **D = create_two_dim_int(270, 730, "ones");
	int **A = create_two_dim_int(10, 510, "ones");

	for (int b = 0; b < 728; b++)
	  for (int a = 0; a < 266; a++)
	  {
	    
	     D[a][b]=D[a+4][b+2]+7/A[a][b];
	  }

    return 0;
}