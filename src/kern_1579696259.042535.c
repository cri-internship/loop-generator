#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "ones");
	int *C = create_one_dim_int(970, "ones");
	int ***A = create_three_dim_int(800, 260, 410, "ones");

	for (int b = 0; b < 259; b++)
	  for (int a = 4; a < 795; a++)
	  {
	    
	     C[a]=A[a][b][a]+C[a];
	     B[a]=A[a+1][b+1][a+5]-B[a]/C[a];
	    
	     int var_a=C[a]*5;
	     int var_b=C[a-4]/4;
	  }

    return 0;
}