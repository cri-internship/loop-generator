#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(640, 1000, 570, "ones");

	for (int b = 1; b < 997; b++)
	  for (int a = 4; a < 638; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+3][a+2]+15;
	    
	     A[a][b][a]=4;
	  }

    return 0;
}