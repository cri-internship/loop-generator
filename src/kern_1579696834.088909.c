#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(570, 90, 680, "random");
	int *B = create_one_dim_int(640, "random");

	for (int b = 0; b < 90; b++)
	  for (int a = 0; a < 568; a++)
	  {
	    
	     A[a][b][a]=29;
	     A[a+2][b][a+1]=28;
	  }

    return 0;
}