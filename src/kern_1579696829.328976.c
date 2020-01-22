#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(330, 720, 590, "random");
	int **D = create_two_dim_int(30, 870, "random");
	int **B = create_two_dim_int(520, 600, "random");
	int ***A = create_three_dim_int(870, 650, 20, "random");

	for (int b = 1; b < 600; b++)
	  for (int a = 3; a < 518; a++)
	  {
	    
	     B[a][b]=B[a+2][b]/29;
	    
	     int var_a=A[a][b][a]*45;
	     int var_b=A[a-3][b-1][a-1]*25;
	  }

    return 0;
}