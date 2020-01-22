#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(870, 660, 80, "ones");
	int **D = create_two_dim_int(200, 500, "ones");
	int **A = create_two_dim_int(670, 720, "ones");
	int *B = create_one_dim_int(720, "ones");

	for (int b = 1; b < 500; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     D[a][b]=D[a-2][b-1]/A[a][b]-B[a]+C[a][b][a];
	    
	     B[a]=B[a-1]+10*D[a][b]-C[a][b][a];
	    
	     C[a][b][a]=13;
	     C[a+3][b+4][a+5]=27;
	  }

    return 0;
}