#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(240, 870, "random");
	int **A = create_two_dim_int(30, 500, "random");

	for (int b = 0; b < 869; b++)
	  for (int a = 0; a < 236; a++)
	  {
	    
	     B[a][b]=0;
	     B[a+4][b+1]=21;
	  }

    return 0;
}