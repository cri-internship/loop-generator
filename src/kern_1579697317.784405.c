#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(960, 200, "zeros");
	int **A = create_two_dim_int(310, 380, "zeros");
	int **E = create_two_dim_int(440, 950, "zeros");
	int *C = create_one_dim_int(890, "zeros");
	int *B = create_one_dim_int(600, "zeros");

	for (int b = 2; b < 199; b++)
	  for (int a = 1; a < 957; a++)
	  {
	    
	     D[a][b]=D[a-1][b-2]/28;
	    
	     D[a][b]=D[a+3][b+1]*27;
	  }

    return 0;
}