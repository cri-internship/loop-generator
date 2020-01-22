#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 80, 740, "random");

	for (int d = 0; d < 737; d++)
	  for (int c = 0; c < 79; c++)
	    for (int b = 0; b < 408; b++)
	      for (int a = 0; a < 408; a++)
	      {
	        
	       double var_a=A[a][b][c]/0.083;
	       double var_b=A[a+2][b+1][c+3]-0.612;
	      }

    return 0;
}