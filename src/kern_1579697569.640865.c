#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(220, 310, "random");
	int ***A = create_three_dim_int(430, 350, 650, "random");
	int ***D = create_three_dim_int(320, 180, 860, "random");
	int ***C = create_three_dim_int(300, 770, 220, "random");

	for (int b = 5; b < 310; b++)
	  for (int a = 2; a < 220; a++)
	  {
	    
	     B[a][b]=B[a-2][b-5]-12;
	    
	     A[a][b][a]=5;
	     A[a+1][b+2][a]=10;
	  }

    return 0;
}