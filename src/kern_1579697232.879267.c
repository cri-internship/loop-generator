#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(340, 240, "random");
	int ***A = create_three_dim_int(530, 810, 180, "random");
	int *B = create_one_dim_int(10, "random");

	for (int b = 0; b < 240; b++)
	  for (int a = 0; a < 336; a++)
	  {
	    
	     C[a][b]=A[a][b][a]*B[a];
	     C[a+4][b]=B[a]/A[a][b][a];
	  }

    return 0;
}