#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(670, 600, "random");
	int ***C = create_three_dim_int(750, 40, 910, "random");
	int ***A = create_three_dim_int(170, 160, 820, "random");

	for (int b = 1; b < 40; b++)
	  for (int a = 5; a < 750; a++)
	  {
	    
	     C[a][b][a]=7;
	     C[a][b-1][a-5]=34;
	  }

    return 0;
}