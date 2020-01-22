#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(780, 300, "ones");
	int ***C = create_three_dim_int(970, 1000, 270, "ones");
	int *A = create_one_dim_int(890, "ones");

	for (int b = 5; b < 296; b++)
	  for (int a = 5; a < 778; a++)
	  {
	    
	     B[a][b]=B[a+2][b+4]+24;
	    
	     A[a]=A[a+1]+C[a][b][a]/B[a][b];
	    
	     C[a][b][a]=A[a];
	     C[a-3][b-1][a]=A[a]+B[a][b];
	    
	     B[a][b]=41;
	    
	     A[a]=31;
	  }

    return 0;
}