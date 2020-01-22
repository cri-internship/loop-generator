#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(500, "random");
	int ***B = create_three_dim_int(410, 980, 710, "random");

	for (int b = 2; b < 980; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-5]/46;
	  }

    return 0;
}