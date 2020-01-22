#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(80, 560, 80, "zeros");
	int *E = create_one_dim_int(20, "zeros");
	int ***A = create_three_dim_int(840, 780, 100, "zeros");
	int ***C = create_three_dim_int(220, 560, 960, "zeros");
	int ***D = create_three_dim_int(300, 520, 990, "zeros");

	for (int b = 0; b < 555; b++)
	  for (int a = 0; a < 215; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+1][a+3]*50;
	    
	     C[a][b][a]=19;
	     C[a+5][b+5][a+4]=16;
	  }

    return 0;
}