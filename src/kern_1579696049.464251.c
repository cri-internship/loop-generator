#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(970, 800, "ones");
	int ***C = create_three_dim_int(280, 800, 110, "ones");
	int ***B = create_three_dim_int(490, 300, 230, "ones");

	for (int b = 5; b < 300; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-1][a-4]+37;
	    
	     B[a][b][a]=B[a-4][b][a]+C[a][b][a];
	    
	     C[a][b][a]=4;
	     C[a-3][b-5][a-5]=3;
	  }

    return 0;
}