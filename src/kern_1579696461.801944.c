#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(830, 110, 790, "ones");
	int *D = create_one_dim_int(770, "ones");
	int ***A = create_three_dim_int(340, 650, 120, "ones");
	int *B = create_one_dim_int(740, "ones");

	for (int b = 4; b < 740; b++)
	  for (int a = 4; a < 740; a++)
	  {
	    
	     B[a]=B[a-4]/5;
	  }

    return 0;
}