#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(760, 420, "zeros");
	int **B = create_two_dim_int(20, 310, "zeros");
	int ***C = create_three_dim_int(30, 230, 560, "zeros");

	for (int b = 0; b < 307; b++)
	  for (int a = 0; a < 20; a++)
	  {
	    
	     B[a][b]=27;
	     B[a][b+3]=40;
	    
	     int var_a=A[a][b]*1;
	     int var_b=A[a][b+1]-7;
	  }

    return 0;
}