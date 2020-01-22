#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(790, 990, "ones");
	int **C = create_two_dim_int(100, 380, "ones");
	int ***A = create_three_dim_int(760, 750, 880, "ones");
	int **D = create_two_dim_int(370, 660, "ones");
	int ***B = create_three_dim_int(640, 640, 940, "ones");

	for (int b = 2; b < 380; b++)
	  for (int a = 2; a < 100; a++)
	  {
	    
	     C[a][b]=C[a-2][b-2]*2;
	    
	     D[a][b]=D[a-2][b-2]-2;
	    
	     B[a][b][a]=B[a+2][b+1][a+2]+46;
	  }

    return 0;
}