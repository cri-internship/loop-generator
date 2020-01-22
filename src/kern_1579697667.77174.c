#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(800, 870, 200, "zeros");
	int **A = create_two_dim_int(510, 300, "zeros");

	for (int b = 4; b < 300; b++)
	  for (int a = 5; a < 510; a++)
	  {
	    
	     A[a][b]=A[a-5][b-4]/28;
	    
	     A[a][b]=A[a][b]/B[a][b][a];
	     B[a][b][a]=A[a-3][b-2]-1;
	  }

    return 0;
}