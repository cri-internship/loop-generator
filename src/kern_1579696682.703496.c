#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(70, 940, "random");
	int **B = create_two_dim_int(230, 930, "random");

	for (int b = 0; b < 930; b++)
	  for (int a = 4; a < 230; a++)
	  {
	    
	     B[a][b]=B[a-4][b]+7;
	  }

    return 0;
}