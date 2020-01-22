#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(340, 780, 880, "random");

	for (int b = 0; b < 778; b++)
	  for (int a = 0; a < 336; a++)
	  {
	    
	     A[a][b][a]=43;
	     A[a][b+2][a+4]=18;
	  }

    return 0;
}