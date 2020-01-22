#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(200, 300, 110, "random");
	int **A = create_two_dim_int(720, 550, "random");
	int *B = create_one_dim_int(230, "random");
	int ***D = create_three_dim_int(800, 70, 330, "random");

	for (int b = 0; b < 546; b++)
	  for (int a = 0; a < 230; a++)
	  {
	    
	     B[a]=3;
	     float  var_a=B[a]-16;
	    
	     A[a][b]=A[a+5][b+4]*14;
	  }

    return 0;
}