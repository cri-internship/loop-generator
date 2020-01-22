#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(420, "random");
	int **D = create_two_dim_int(740, 490, "random");
	int *A = create_one_dim_int(570, "random");
	int **B = create_two_dim_int(90, 240, "random");

	for (int b = 2; b < 490; b++)
	  for (int a = 4; a < 740; a++)
	  {
	    
	     B[a][b]=D[a][b]*14/A[a];
	     A[a]=D[a-4][b-2]+C[a]-A[a];
	  }

    return 0;
}