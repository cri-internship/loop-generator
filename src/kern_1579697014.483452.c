#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(450, "zeros");
	int ***C = create_three_dim_int(990, 400, 240, "zeros");
	int *B = create_one_dim_int(10, "zeros");
	int ***D = create_three_dim_int(260, 580, 200, "zeros");

	for (int b = 2; b < 450; b++)
	  for (int a = 2; a < 450; a++)
	  {
	    
	     A[a]=A[a-2]-C[a][b][a];
	  }

    return 0;
}