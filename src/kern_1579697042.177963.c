#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(520, "ones");
	int ***A = create_three_dim_int(390, 210, 120, "ones");
	int *B = create_one_dim_int(780, "ones");

	for (int b = 5; b < 520; b++)
	  for (int a = 5; a < 520; a++)
	  {
	    
	     C[a]=C[a]+A[a][b][a]*B[a];
	     C[a]=B[a]-9;
	    
	     int var_a=B[a]+14;
	     int var_b=B[a-5]-38;
	  }

    return 0;
}