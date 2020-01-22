#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(580, "zeros");
	int *B = create_one_dim_int(560, "zeros");

	for (int c = 2; c < 558; c++)
	  for (int b = 2; b < 558; b++)
	    for (int a = 2; a < 558; a++)
	    {
	      
	      B[a]=B[a+2]/35;
	      
	      int var_a=B[a]-47;
	      int var_b=B[a-2]+18;
	    }

    return 0;
}