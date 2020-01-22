#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(140, 980, 840, "zeros");
	int ***B = create_three_dim_int(880, 560, 540, "zeros");

	for (int b = 5; b < 560; b++)
	  for (int a = 3; a < 139; a++)
	  {
	    
	     B[a][b][a]=21;
	     B[a][b-5][a-3]=A[a][b][a];
	    
	     A[a][b][a]=25;
	     A[a+1][b+1][a]=41;
	  }

    return 0;
}