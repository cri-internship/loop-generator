#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(980, 590, 410, "random");

	for (int b = 2; b < 590; b++)
	  for (int a = 0; a < 980; a++)
	  {
	    
	     A[a][b][a]=A[a][b-2][a]+47;
	  }

    return 0;
}