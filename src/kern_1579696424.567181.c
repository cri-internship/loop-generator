#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(900, 870, 1000, "random");
	int **C = create_two_dim_int(1000, 330, "random");
	int ***A = create_three_dim_int(990, 30, 810, "random");

	for (int d = 0; d < 998; d++)
	  for (int c = 0; c < 867; c++)
	    for (int b = 0; b < 898; b++)
	      for (int a = 0; a < 898; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+1][c+2]-28;
	        
	       int var_a=B[a][b][c]/44;
	       int var_b=B[a+1][b+3][c]-37;
	      }

    return 0;
}