#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(420, 190, 200, "random");
	int ***C = create_three_dim_int(40, 420, 20, "random");
	int ***D = create_three_dim_int(840, 70, 280, "random");
	int **B = create_two_dim_int(980, 420, "random");

	for (int b = 3; b < 420; b++)
	  for (int a = 3; a < 40; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-3][a-2]+A[a][b][a];
	  }

    return 0;
}