#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(400, 970, 150, "zeros");
	int *A = create_one_dim_int(380, "zeros");
	int *C = create_one_dim_int(30, "zeros");
	int ***D = create_three_dim_int(880, 50, 650, "zeros");
	int ***B = create_three_dim_int(460, 660, 400, "zeros");

	for (int b = 3; b < 30; b++)
	  for (int a = 3; a < 30; a++)
	  {
	    
	     C[a]=23;
	     C[a-3]=16;
	  }

    return 0;
}