#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(720, "ones");
	int ***C = create_three_dim_int(100, 770, 140, "ones");
	int *A = create_one_dim_int(430, "ones");
	int ***B = create_three_dim_int(580, 330, 540, "ones");

	for (int b = 0; b < 718; b++)
	  for (int a = 0; a < 718; a++)
	  {
	    
	     D[a]=D[a+2]*49;
	  }

    return 0;
}