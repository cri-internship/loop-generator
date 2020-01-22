#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(900, 930, 460, "ones");
	int ***D = create_three_dim_int(90, 60, 50, "ones");
	int ***C = create_three_dim_int(500, 160, 900, "ones");
	int **A = create_two_dim_int(640, 830, "ones");

	for (int b = 5; b < 830; b++)
	  for (int a = 5; a < 640; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]*B[a][b][a]+C[a][b][a]/D[a][b][a];
	    
	     A[a][b]=D[a][b][a];
	    
	     B[a][b][a]=A[a][b]+C[a][b][a]*D[a][b][a];
	     B[a-5][b-5][a-3]=C[a][b][a];
	  }

    return 0;
}