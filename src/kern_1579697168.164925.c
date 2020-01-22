#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(110, 930, "random");
	int ***E = create_three_dim_int(530, 970, 810, "random");
	int *C = create_one_dim_int(670, "random");
	int *A = create_one_dim_int(790, "random");
	int ***B = create_three_dim_int(960, 400, 810, "random");

	for (int d = 1; d < 810; d++)
	  for (int c = 4; c < 929; c++)
	    for (int b = 5; b < 108; b++)
	      for (int a = 5; a < 108; a++)
	      {
	        
	       A[a]=A[a-5]+C[a]*47;
	        
	       E[a][b][c]=E[a-5][b-4][c-1]-A[a];
	        
	       D[a][b]=D[a+2][b+1]*1;
	        
	       int var_a=A[a]/25;
	       int var_b=A[a+5]-31;
	      }

    return 0;
}