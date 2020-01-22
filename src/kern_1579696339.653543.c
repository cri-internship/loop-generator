#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(190, 440, "ones");
	int ***D = create_three_dim_int(640, 610, 820, "ones");
	int **B = create_two_dim_int(870, 760, "ones");
	int *E = create_one_dim_int(200, "ones");
	int **C = create_two_dim_int(90, 700, "ones");

	for (int b = 0; b < 755; b++)
	  for (int a = 0; a < 870; a++)
	  {
	    
	     B[a][b]=B[a][b+5]*2;
	  }

    return 0;
}