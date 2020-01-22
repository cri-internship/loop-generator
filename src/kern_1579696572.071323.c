#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(820, "random");
	int **E = create_two_dim_int(500, 150, "random");
	int ***D = create_three_dim_int(510, 260, 320, "random");
	int *C = create_one_dim_int(360, "random");
	int **A = create_two_dim_int(370, 60, "random");

	for (int c = 0; c < 317; c++)
	  for (int b = 0; b < 260; b++)
	    for (int a = 0; a < 505; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b][c+3]/12;
	    }

    return 0;
}