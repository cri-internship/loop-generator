#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(290, 40, "ones");
	int *A = create_one_dim_int(370, "ones");
	int *D = create_one_dim_int(10, "ones");
	int ***B = create_three_dim_int(440, 970, 900, "ones");

	for (int b = 5; b < 970; b++)
	  for (int a = 2; a < 440; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-5][a-2]*42/A[a];
	  }

    return 0;
}