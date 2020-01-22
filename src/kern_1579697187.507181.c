#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 120, 840, "ones");
	int *E = create_one_dim_int(640, "ones");
	int *D = create_one_dim_int(20, "ones");
	int ***C = create_three_dim_int(510, 240, 400, "ones");
	int **B = create_two_dim_int(860, 10, "ones");

	for (int b = 0; b < 640; b++)
	  for (int a = 0; a < 640; a++)
	  {
	    
	     E[a]=A[a][b][a]-D[a]*C[a][b][a]+18;
	     E[a]=A[a][b][a]/C[a][b][a];
	  }

    return 0;
}