#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(110, "random");
	int **A = create_two_dim_int(330, 410, "random");
	int *B = create_one_dim_int(360, "random");
	int ***D = create_three_dim_int(480, 750, 480, "random");
	int *C = create_one_dim_int(60, "random");

	for (int b = 3; b < 746; b++)
	  for (int a = 3; a < 478; a++)
	  {
	    
	     D[a][b][a]=D[a+2][b+4][a+1]*23;
	    
	     D[a][b][a]=36;
	  }

    return 0;
}