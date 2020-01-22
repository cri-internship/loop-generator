#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(210, "random");
	int *A = create_one_dim_int(880, "random");
	int **C = create_two_dim_int(420, 400, "random");
	int **B = create_two_dim_int(520, 730, "random");

	for (int c = 0; c < 399; c++)
	  for (int b = 0; b < 418; b++)
	    for (int a = 0; a < 418; a++)
	    {
	      
	      D[a]=C[a][b]+B[a][b];
	      B[a][b]=C[a+2][b+1]+6;
	    }

    return 0;
}