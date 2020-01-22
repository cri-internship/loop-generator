#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(740, 420, "random");
	int **A = create_two_dim_int(680, 130, "random");
	int ***C = create_three_dim_int(740, 510, 190, "random");

	for (int b = 4; b < 420; b++)
	  for (int a = 4; a < 740; a++)
	  {
	    
	     B[a][b]=B[a-4][b-4]/A[a][b];
	  }

    return 0;
}