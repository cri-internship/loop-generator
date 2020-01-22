#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(690, "random");
	int ***A = create_three_dim_int(20, 980, 490, "random");
	int ***B = create_three_dim_int(780, 30, 380, "random");
	int ***D = create_three_dim_int(220, 290, 440, "random");
	int *C = create_one_dim_int(140, "random");

	for (int b = 2; b < 690; b++)
	  for (int a = 2; a < 690; a++)
	  {
	    
	     E[a]=E[a-2]/D[a][b][a];
	  }

    return 0;
}