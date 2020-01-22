#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(130, 700, "random");
	int ***A = create_three_dim_int(640, 650, 850, "random");
	int ***B = create_three_dim_int(750, 140, 270, "random");

	for (int b = 0; b < 650; b++)
	  for (int a = 0; a < 637; a++)
	  {
	    
	     A[a][b][a]=42;
	     A[a+2][b][a+3]=11;
	  }

    return 0;
}