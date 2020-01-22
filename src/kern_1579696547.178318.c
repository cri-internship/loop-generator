#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(500, 670, 110, "zeros");
	int **E = create_two_dim_int(720, 350, "zeros");
	int ***C = create_three_dim_int(270, 270, 980, "zeros");
	int **D = create_two_dim_int(470, 920, "zeros");
	int *A = create_one_dim_int(170, "zeros");

	for (int b = 5; b < 920; b++)
	  for (int a = 4; a < 470; a++)
	  {
	    
	     D[a][b]=D[a-4][b-5]+41;
	  }

    return 0;
}