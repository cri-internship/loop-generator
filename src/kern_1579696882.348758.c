#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(530, 170, 580, "random");
	int *C = create_one_dim_int(520, "random");
	int *A = create_one_dim_int(120, "random");

	for (int b = 0; b < 520; b++)
	  for (int a = 0; a < 520; a++)
	  {
	    
	     B[a][b][a]=C[a]+A[a];
	     C[a]=B[a][b][a]+B[a][b][a];
	  }

    return 0;
}