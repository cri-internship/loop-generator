#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(970, "ones");
	int ***C = create_three_dim_int(320, 720, 840, "ones");
	int *B = create_one_dim_int(450, "ones");

	for (int c = 5; c < 969; c++)
	  for (int b = 5; b < 969; b++)
	    for (int a = 5; a < 969; a++)
	    {
	      
	      A[a]=27;
	      A[a-5]=22;
	      
	      A[a]=36;
	      
	      int var_a=A[a]*30;
	      int var_b=A[a-5]+25;
	    }

    return 0;
}