#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(590, 560, "zeros");
	int **B = create_two_dim_int(770, 80, "zeros");

	for (int c = 5; c < 75; c++)
	  for (int b = 5; b < 767; b++)
	    for (int a = 5; a < 767; a++)
	    {
	      
	      B[a][b]=B[a+3][b+5]/48;
	      
	      B[a][b]=8;
	      
	      int var_b=B[a][b]*4;
	      int var_c=B[a-5][b-5]+28;
	    }

    return 0;
}