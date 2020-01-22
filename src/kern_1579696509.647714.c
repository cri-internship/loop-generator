#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(270, 770, 130, "zeros");

	for (int b = 1; b < 770; b++)
	  for (int a = 2; a < 270; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-1][a]+4;
	  }

    return 0;
}