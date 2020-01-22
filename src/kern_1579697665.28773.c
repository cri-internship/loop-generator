#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(90, 930, 70, "random");
	double *A = create_one_dim_double(960, "random");
	double *C = create_one_dim_double(850, "random");
	double *D = create_one_dim_double(710, "random");

	for (int d = 0; d < 709; d++)
	  for (int c = 0; c < 709; c++)
	    for (int b = 0; b < 709; b++)
	      for (int a = 0; a < 709; a++)
	      {
	        
	       double var_a=D[a]*0.421;
	       double var_b=D[a+1]/0.683;
	        
	       double var_c=C[a]+0.222;
	       double var_d=C[a+5]/0.994;
	      }

    return 0;
}