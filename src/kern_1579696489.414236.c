#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(580, 90, "ones");
	int **A = create_two_dim_int(570, 10, "ones");
	int **B = create_two_dim_int(530, 900, "ones");

	for (int b = 0; b < 86; b++)
	  for (int a = 0; a < 576; a++)
	  {
	    
	     C[a][b]=C[a+4][b+4]+24*A[a][b];
	  }

    return 0;
}