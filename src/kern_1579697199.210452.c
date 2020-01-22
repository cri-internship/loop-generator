#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(630, 720, 770, "ones");
	int *A = create_one_dim_int(650, "ones");
	int *B = create_one_dim_int(640, "ones");
	int ***D = create_three_dim_int(940, 490, 750, "ones");

	for (int b = 0; b < 487; b++)
	  for (int a = 0; a < 640; a++)
	  {
	    
	     D[a][b][a]=C[a][b][a]-B[a];
	     D[a][b+3][a+2]=A[a]/C[a][b][a];
	    
	     int var_a=B[a]/7;
	  }

    return 0;
}