#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(960, "ones");
	int *B = create_one_dim_int(20, "ones");
	int *C = create_one_dim_int(930, "ones");
	int ***D = create_three_dim_int(170, 200, 770, "ones");
	int *A = create_one_dim_int(490, "ones");

	for (int b = 5; b < 200; b++)
	  for (int a = 3; a < 170; a++)
	  {
	    
	     D[a][b][a]=49;
	     D[a][b-5][a-3]=9;
	  }

    return 0;
}