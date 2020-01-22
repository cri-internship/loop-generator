#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(1000, 750, "random");
	int **B = create_two_dim_int(520, 940, "random");

	for (int d = 4; d < 750; d++)
	  for (int c = 2; c < 997; c++)
	    for (int b = 2; b < 997; b++)
	      for (int a = 2; a < 997; a++)
	      {
	        
	       A[a][b]=A[a+3][b]-20;
	        
	       int var_a=A[a][b]+50;
	       int var_b=A[a-2][b-4]-13;
	      }

    return 0;
}