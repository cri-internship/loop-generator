#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(230, 170, 410, "random");
	int **C = create_two_dim_int(500, 600, "random");
	int **A = create_two_dim_int(330, 370, "random");

	for (int b = 5; b < 170; b++)
	  for (int a = 3; a < 230; a++)
	  {
	    
	     A[a][b]=7;
	     A[a-3][b]=21;
	    
	     B[a][b][a]=7;
	     B[a-2][b-5][a-2]=47;
	  }

    return 0;
}