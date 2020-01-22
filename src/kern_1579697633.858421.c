#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(760, 960, 300, "ones");
	int **B = create_two_dim_int(370, 640, "ones");

	for (int b = 0; b < 639; b++)
	  for (int a = 0; a < 368; a++)
	  {
	    
	     B[a][b]=B[a+2][b+1]/31;
	  }

    return 0;
}