#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(340, 50, 150, "zeros");
	int *C = create_one_dim_int(200, "zeros");
	int ***A = create_three_dim_int(610, 390, 460, "zeros");

	for (int b = 3; b < 388; b++)
	  for (int a = 2; a < 607; a++)
	  {
	    
	     A[a][b][a]=A[a+1][b+2][a+3]-C[a];
	    
	     A[a][b][a]=31;
	  }

    return 0;
}