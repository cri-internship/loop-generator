#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(930, 390, "random");
	int **B = create_two_dim_int(880, 660, "random");
	int *C = create_one_dim_int(280, "random");

	for (int b = 0; b < 655; b++)
	  for (int a = 0; a < 877; a++)
	  {
	    
	     B[a][b]=B[a+3][b+5]-15;
	  }

    return 0;
}