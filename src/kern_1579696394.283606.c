#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 530, 730, "random");
	int *C = create_one_dim_int(500, "random");
	int **A = create_two_dim_int(50, 360, "random");

	for (int b = 0; b < 358; b++)
	  for (int a = 0; a < 46; a++)
	  {
	    
	     A[a][b]=A[a+4][b+2]/43;
	    
	     A[a][b]=20;
	  }

    return 0;
}