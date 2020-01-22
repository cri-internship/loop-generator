#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 240, "zeros");
	int **A = create_two_dim_int(350, 870, "zeros");

	for (int b = 4; b < 237; b++)
	  for (int a = 2; a < 50; a++)
	  {
	    
	     B[a][b]=B[a-2][b-4]/A[a][b];
	    
	     A[a][b]=A[a+1][b+3]-15;
	    
	     A[a][b]=A[a+4][b+2]-B[a][b];
	    
	     B[a][b]=A[a][b];
	  }

    return 0;
}