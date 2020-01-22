#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(290, 680, "ones");
	int **E = create_two_dim_int(270, 560, "ones");
	int **A = create_two_dim_int(940, 820, "ones");
	int ***C = create_three_dim_int(30, 720, 800, "ones");
	int ***D = create_three_dim_int(210, 910, 40, "ones");

	for (int b = 3; b < 560; b++)
	  for (int a = 4; a < 270; a++)
	  {
	    
	     E[a][b]=E[a][b-3]*11;
	    
	     B[a][b]=0;
	     B[a-4][b]=39;
	  }

    return 0;
}