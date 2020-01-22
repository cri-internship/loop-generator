#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(990, "ones");
	int ***C = create_three_dim_int(860, 710, 710, "ones");
	int **A = create_two_dim_int(930, 410, "ones");

	for (int b = 0; b < 409; b++)
	  for (int a = 0; a < 927; a++)
	  {
	    
	     A[a][b]=A[a+3][b+1]*44;
	    
	     B[a]=B[a+3]*43;
	  }

    return 0;
}