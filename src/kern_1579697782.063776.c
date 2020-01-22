#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(640, "random");
	int **B = create_two_dim_int(670, 400, "random");
	int *D = create_one_dim_int(30, "random");
	int **A = create_two_dim_int(570, 250, "random");

	for (int c = 0; c < 396; c++)
	  for (int b = 0; b < 666; b++)
	    for (int a = 0; a < 666; a++)
	    {
	      
	      B[a][b]=B[a+4][b+4]+D[a]/A[a][b]*C[a];
	    }

    return 0;
}