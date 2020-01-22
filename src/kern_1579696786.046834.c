#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(990, 120, "random");
	int *A = create_one_dim_int(410, "random");
	int **B = create_two_dim_int(510, 310, "random");

	for (int b = 0; b < 117; b++)
	  for (int a = 0; a < 507; a++)
	  {
	    
	     C[a][b]=C[a][b+3]+A[a]*B[a][b];
	    
	     int var_a=B[a][b]+32;
	     int var_b=B[a+3][b+3]+39;
	  }

    return 0;
}