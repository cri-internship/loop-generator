#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(180, "ones");
	double ***D = create_three_dim_double(350, 610, 300, "ones");
	double ***A = create_three_dim_double(80, 770, 40, "ones");
	double ***B = create_three_dim_double(840, 820, 490, "ones");

	for (int d = 5; d < 180; d++)
	  for (int c = 5; c < 180; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       double var_a=C[a]/0.213;
	       double var_b=C[a-5]*0.74;
	      }

    return 0;
}