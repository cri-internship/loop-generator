#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(270, 720, "ones");
	int *C = create_one_dim_int(750, "ones");
	int **B = create_two_dim_int(830, 650, "ones");
	int ***D = create_three_dim_int(720, 660, 850, "ones");

	for (int b = 5; b < 650; b++)
	  for (int a = 4; a < 270; a++)
	  {
	    
	     A[a][b]=A[a][b-5]*15;
	    
	     int var_a=B[a][b]*31;
	     int var_b=B[a-4][b-5]*4;
	  }

    return 0;
}