#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(590, 240, 170, "random");
	int *B = create_one_dim_int(960, "random");

	for (int b = 0; b < 958; b++)
	  for (int a = 0; a < 958; a++)
	  {
	    
	     int var_a=B[a]/44;
	     int var_b=B[a+2]/30;
	  }

    return 0;
}