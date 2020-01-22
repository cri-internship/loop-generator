#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(530, 410, "zeros");
	int **C = create_two_dim_int(640, 810, "zeros");
	int *B = create_one_dim_int(530, "zeros");

	for (int b = 0; b < 805; b++)
	  for (int a = 0; a < 637; a++)
	  {
	    
	     int var_a=C[a][b]-15;
	     int var_b=C[a+3][b+5]*1;
	  }

    return 0;
}