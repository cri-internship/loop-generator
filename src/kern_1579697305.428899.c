#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(330, 970, "ones");
	int *D = create_one_dim_int(620, "ones");
	int ***B = create_three_dim_int(70, 540, 220, "ones");
	int **A = create_two_dim_int(610, 870, "ones");

	for (int b = 0; b < 537; b++)
	  for (int a = 0; a < 66; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+3][a]/39;
	  }

    return 0;
}