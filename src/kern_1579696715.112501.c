#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(560, "ones");
	int *B = create_one_dim_int(1000, "ones");
	int ***E = create_three_dim_int(50, 60, 710, "ones");
	int **D = create_two_dim_int(670, 220, "ones");
	int *A = create_one_dim_int(1000, "ones");

	for (int b = 0; b < 59; b++)
	  for (int a = 1; a < 48; a++)
	  {
	    
	     int var_a=C[a]-39;
	     int var_b=C[a-1]+36;
	    
	     C[a]=E[a][b][a]+C[a]/B[a];
	     E[a][b][a]=E[a+2][b+1][a+1]*D[a][b];
	  }

    return 0;
}