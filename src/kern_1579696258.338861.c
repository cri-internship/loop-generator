#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(560, 460, "ones");
	int **D = create_two_dim_int(100, 530, "ones");
	int *E = create_one_dim_int(70, "ones");
	int ***A = create_three_dim_int(140, 300, 490, "ones");
	int *C = create_one_dim_int(510, "ones");

	for (int b = 4; b < 459; b++)
	  for (int a = 1; a < 560; a++)
	  {
	    
	     B[a][b]=4;
	     B[a][b+1]=C[a]/4;
	    
	     int var_a=B[a][b]/24;
	     int var_b=B[a-1][b-4]*46;
	  }

    return 0;
}