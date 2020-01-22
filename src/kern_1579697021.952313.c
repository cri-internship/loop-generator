#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(820, 260, 890, "random");
	float **B = create_two_dim_float(620, 510, "random");

	for (int d = 0; d < 888; d++)
	  for (int c = 0; c < 259; c++)
	    for (int b = 0; b < 815; b++)
	      for (int a = 0; a < 815; a++)
	      {
	        
	       float var_a=A[a][b][c]*0.24;
	       float var_b=A[a+5][b+1][c+2]-0.339;
	      }

    return 0;
}