#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(360, "ones");
	int **A = create_two_dim_int(600, 390, "ones");
	int *B = create_one_dim_int(810, "ones");
	int *E = create_one_dim_int(620, "ones");
	int *C = create_one_dim_int(130, "ones");

	for (int c = 4; c < 388; c++)
	  for (int b = 2; b < 600; b++)
	    for (int a = 2; a < 600; a++)
	    {
	      
	      A[a][b]=A[a][b+2]+8;
	      
	      int var_a=A[a][b]*42;
	      int var_b=A[a-2][b-4]*40;
	    }

    return 0;
}