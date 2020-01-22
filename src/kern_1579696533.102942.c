#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(870, "zeros");
	int ***A = create_three_dim_int(860, 490, 10, "zeros");

	for (int d = 2; d < 865; d++)
	  for (int c = 2; c < 865; c++)
	    for (int b = 2; b < 865; b++)
	      for (int a = 2; a < 865; a++)
	      {
	        
	       B[a]=B[a-2]/22;
	        
	       B[a]=B[a+5]+47;
	        
	       B[a]=B[a+2]*42;
	      }

    return 0;
}