#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(330, 900, 350, "random");

	for (int b = 1; b < 898; b++)
	  for (int a = 5; a < 326; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+1][a+3]*42;
	    
	     A[a][b][a]=15;
	  }

    return 0;
}