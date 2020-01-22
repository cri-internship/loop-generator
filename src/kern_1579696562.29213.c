#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(680, 970, 400, "random");
	int *B = create_one_dim_int(370, "random");
	int *C = create_one_dim_int(770, "random");

	for (int d = 2; d < 369; d++)
	  for (int c = 2; c < 369; c++)
	    for (int b = 2; b < 369; b++)
	      for (int a = 2; a < 369; a++)
	      {
	        
	       B[a]=B[a+1]-48;
	        
	       C[a]=B[a]/14;
	       B[a]=B[a-2]-36;
	      }

    return 0;
}