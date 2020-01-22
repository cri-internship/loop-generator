#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(600, "ones");
	int ***C = create_three_dim_int(10, 100, 490, "ones");
	int *B = create_one_dim_int(80, "ones");

	for (int b = 2; b < 100; b++)
	  for (int a = 2; a < 10; a++)
	  {
	    
	     A[a]=B[a]+C[a][b][a];
	     C[a][b][a]=A[a]/9;
	    
	     C[a][b][a]=33+A[a];
	  }

    return 0;
}