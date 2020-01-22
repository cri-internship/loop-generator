#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(540, 720, 490, "random");
	int **B = create_two_dim_int(90, 700, "random");
	int *A = create_one_dim_int(980, "random");

	for (int d = 0; d < 699; d++)
	  for (int c = 5; c < 85; c++)
	    for (int b = 5; b < 85; b++)
	      for (int a = 5; a < 85; a++)
	      {
	        
	       A[a]=A[a-5]+35;
	        
	       int var_a=B[a][b]*11;
	       int var_b=B[a+5][b+1]+30;
	      }

    return 0;
}