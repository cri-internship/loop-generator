#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(120, "ones");
	int *D = create_one_dim_int(720, "ones");
	int **A = create_two_dim_int(770, 630, "ones");
	int *B = create_one_dim_int(250, "ones");

	for (int d = 0; d < 117; d++)
	  for (int c = 0; c < 117; c++)
	    for (int b = 0; b < 117; b++)
	      for (int a = 0; a < 117; a++)
	      {
	        
	       C[a]=C[a+3]-19/D[a]+B[a];
	      }

    return 0;
}