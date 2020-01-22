#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(980, 570, "random");
	int **B = create_two_dim_int(150, 290, "random");
	int ***D = create_three_dim_int(670, 690, 70, "random");
	int **E = create_two_dim_int(660, 40, "random");
	int ***A = create_three_dim_int(700, 660, 420, "random");

	for (int b = 0; b < 656; b++)
	  for (int a = 0; a < 695; a++)
	  {
	    
	     A[a][b][a]=48;
	     A[a+5][b+4][a+4]=5;
	  }

    return 0;
}