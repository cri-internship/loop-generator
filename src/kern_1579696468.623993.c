#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(90, "zeros");
	int ***B = create_three_dim_int(550, 560, 760, "zeros");

	for (int b = 0; b < 557; b++)
	  for (int a = 0; a < 86; a++)
	  {
	    
	     A[a]=48;
	     float  var_a=A[a]+14;
	    
	     A[a]=A[a+4]-15;
	    
	     B[a][b][a]=A[a];
	     B[a+2][b+3][a+5]=A[a];
	  }

    return 0;
}