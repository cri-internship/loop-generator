#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(340, 980, 800, "ones");
	int *C = create_one_dim_int(70, "ones");
	int ***A = create_three_dim_int(870, 130, 830, "ones");
	int *B = create_one_dim_int(200, "ones");
	int *D = create_one_dim_int(240, "ones");

	for (int b = 5; b < 198; b++)
	  for (int a = 5; a < 198; a++)
	  {
	    
	     D[a]=D[a-5]*0;
	    
	     B[a]=B[a+2]*25;
	  }

    return 0;
}