#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(170, "ones");
	int ***B = create_three_dim_int(380, 190, 300, "ones");
	int ***A = create_three_dim_int(600, 120, 380, "ones");
	int *D = create_one_dim_int(280, "ones");

	for (int b = 4; b < 120; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     int var_a=C[a]+17;
	     int var_b=C[a]*14;
	    
	     A[a][b][a]=A[a][b][a]/C[a]*D[a];
	     C[a]=A[a-5][b-4][a]/B[a][b][a]*D[a]+C[a];
	  }

    return 0;
}