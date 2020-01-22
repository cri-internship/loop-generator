#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(820, 570, 790, "ones");
	int **A = create_two_dim_int(910, 700, "ones");
	int ***E = create_three_dim_int(970, 810, 600, "ones");
	int *B = create_one_dim_int(770, "ones");
	int ***C = create_three_dim_int(180, 370, 900, "ones");

	for (int d = 1; d < 770; d++)
	  for (int c = 1; c < 770; c++)
	    for (int b = 1; b < 770; b++)
	      for (int a = 1; a < 770; a++)
	      {
	        
	       int var_a=B[a]+3;
	       int var_b=B[a-1]+20;
	      }

    return 0;
}