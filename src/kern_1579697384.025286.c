#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(540, 370, "random");
	int **A = create_two_dim_int(500, 80, "random");
	int ***D = create_three_dim_int(180, 200, 160, "random");
	int *B = create_one_dim_int(300, "random");
	int **C = create_two_dim_int(730, 40, "random");

	for (int b = 2; b < 40; b++)
	  for (int a = 4; a < 730; a++)
	  {
	    
	     C[a][b]=B[a];
	     C[a-4][b-2]=25/D[a][b][a];
	  }

    return 0;
}