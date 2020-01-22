#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(720, "ones");
	int ***B = create_three_dim_int(770, 640, 780, "ones");
	int *C = create_one_dim_int(590, "ones");
	int ***D = create_three_dim_int(200, 600, 420, "ones");
	int **E = create_two_dim_int(630, 850, "ones");

	for (int b = 0; b < 636; b++)
	  for (int a = 0; a < 768; a++)
	  {
	    
	     B[a][b][a]=E[a][b]/C[a];
	     B[a][b+4][a+2]=D[a][b][a]/A[a];
	  }

    return 0;
}