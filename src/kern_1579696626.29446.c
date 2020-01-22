#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(140, 530, 920, "ones");
	int *B = create_one_dim_int(810, "ones");

	for (int d = 1; d < 920; d++)
	  for (int c = 0; c < 530; c++)
	    for (int b = 3; b < 140; b++)
	      for (int a = 3; a < 140; a++)
	      {
	        
	       int var_a=A[a][b][c]-37;
	       int var_b=A[a-3][b][c-1]+44;
	        
	       int var_c=B[a]+39;
	       int var_d=B[a]-8;
	      }

    return 0;
}