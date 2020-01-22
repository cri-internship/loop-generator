#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(190, 160, "ones");
	int *A = create_one_dim_int(20, "ones");
	int ***B = create_three_dim_int(570, 920, 1000, "ones");
	int *D = create_one_dim_int(910, "ones");

	for (int c = 0; c < 16; c++)
	  for (int b = 0; b < 16; b++)
	    for (int a = 0; a < 16; a++)
	    {
	      
	      D[a]=D[a+4]*C[a][b]/A[a];
	      
	      A[a]=16;
	      A[a+4]=50;
	    }

    return 0;
}