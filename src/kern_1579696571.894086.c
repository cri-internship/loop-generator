#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(70, "zeros");
	int **A = create_two_dim_int(810, 70, "zeros");
	int *C = create_one_dim_int(500, "zeros");
	int **D = create_two_dim_int(650, 30, "zeros");
	int *E = create_one_dim_int(920, "zeros");

	for (int d = 4; d < 500; d++)
	  for (int c = 4; c < 500; c++)
	    for (int b = 4; b < 500; b++)
	      for (int a = 4; a < 500; a++)
	      {
	        
	       C[a]=C[a-4]-26;
	        
	       E[a]=E[a-2]/35;
	      }

    return 0;
}