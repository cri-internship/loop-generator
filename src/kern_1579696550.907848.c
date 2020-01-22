#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(150, "zeros");
	int ***B = create_three_dim_int(760, 130, 270, "zeros");
	int **A = create_two_dim_int(810, 720, "zeros");

	for (int b = 0; b < 127; b++)
	  for (int a = 0; a < 756; a++)
	  {
	    
	     B[a][b][a]=B[a][b+3][a+4]+31;
	    
	     int var_a=A[a][b]-11;
	     int var_b=A[a+1][b+5]*27;
	  }

    return 0;
}