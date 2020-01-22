#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(10, "random");
	int ***A = create_three_dim_int(260, 900, 20, "random");
	int **B = create_two_dim_int(1000, 620, "random");
	int **D = create_two_dim_int(660, 30, "random");

	for (int b = 0; b < 30; b++)
	  for (int a = 5; a < 5; a++)
	  {
	    
	     D[a][b]=D[a-5][b]*48;
	    
	     C[a]=C[a+5]/13;
	  }

    return 0;
}