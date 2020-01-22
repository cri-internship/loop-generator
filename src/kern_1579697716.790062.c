#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(450, 310, 840, "ones");
	int *C = create_one_dim_int(400, "ones");
	int **B = create_two_dim_int(200, 130, "ones");
	int **A = create_two_dim_int(300, 700, "ones");

	for (int b = 3; b < 130; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     B[a][b]=C[a];
	     B[a-2][b-3]=D[a][b][a]/16;
	    
	     int var_a=B[a][b]+11;
	     int var_b=B[a-2][b-3]*44;
	  }

    return 0;
}