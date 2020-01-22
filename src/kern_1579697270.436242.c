#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(490, 560, "zeros");
	int **A = create_two_dim_int(810, 450, "zeros");
	int *D = create_one_dim_int(140, "zeros");
	int *C = create_one_dim_int(410, "zeros");

	for (int b = 5; b < 140; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     D[a]=1;
	     D[a-5]=32;
	  }

    return 0;
}