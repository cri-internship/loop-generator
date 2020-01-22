#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(570, "ones");
	int **B = create_two_dim_int(320, 170, "ones");
	int *D = create_one_dim_int(610, "ones");
	int *A = create_one_dim_int(760, "ones");
	int ***E = create_three_dim_int(370, 220, 720, "ones");

	for (int d = 0; d < 608; d++)
	  for (int c = 0; c < 608; c++)
	    for (int b = 0; b < 608; b++)
	      for (int a = 0; a < 608; a++)
	      {
	        
	       D[a]=49;
	       D[a+2]=8;
	        
	       int var_a=A[a]/26;
	       int var_b=A[a+4]*8;
	      }

    return 0;
}