#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(720, "zeros");

	for (int c = 1; c < 720; c++)
	  for (int b = 1; b < 720; b++)
	    for (int a = 1; a < 720; a++)
	    {
	      
	      int var_a=A[a]*7;
	      A[a]=8;
	      
	      int var_b=A[a]/20;
	      int var_c=A[a-1]*6;
	    }

    return 0;
}