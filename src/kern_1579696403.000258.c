#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 190, "ones");
	float ***A = create_three_dim_float(580, 730, 550, "ones");
	float ***D = create_three_dim_float(240, 630, 460, "ones");
	float *C = create_one_dim_float(310, "ones");
	float **E = create_two_dim_float(820, 150, "ones");

	for (int d = 0; d < 146; d++)
	  for (int c = 0; c < 817; c++)
	    for (int b = 0; b < 817; b++)
	      for (int a = 0; a < 817; a++)
	      {
	        
	       E[a][b]=E[a+3][b+4]/0.816;
	      }

    return 0;
}