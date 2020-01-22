#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(810, 670, "zeros");
	int *A = create_one_dim_int(860, "zeros");
	int *D = create_one_dim_int(690, "zeros");
	int ***B = create_three_dim_int(700, 410, 870, "zeros");

	for (int b = 0; b < 857; b++)
	  for (int a = 0; a < 857; a++)
	  {
	    
	     A[a]=A[a+3]-B[a][b][a]/D[a]*C[a][b];
	  }

    return 0;
}