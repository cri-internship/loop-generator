#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(150, 290, 300, "random");
	float **B = create_two_dim_float(760, 230, "random");
	float **C = create_two_dim_float(790, 500, "random");

	for (int b = 0; b < 225; b++)
	  for (int a = 0; a < 758; a++)
	  {
	    
	     B[a][b]=B[a+2][b+5]*0.868;
	  }

    return 0;
}