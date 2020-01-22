#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(10, 40, 540, "ones");
	int ***B = create_three_dim_int(250, 480, 80, "ones");

	for (int b = 4; b < 40; b++)
	  for (int a = 3; a < 10; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-4][a-2]/B[a][b][a];
	  }

    return 0;
}