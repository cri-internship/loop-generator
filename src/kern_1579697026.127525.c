#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(420, 600, "ones");
	int ***B = create_three_dim_int(820, 650, 250, "ones");

	for (int b = 5; b < 646; b++)
	  for (int a = 5; a < 816; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-4][a]*15;
	    
	     B[a][b][a]=B[a-2][b-5][a-5]-6;
	    
	     B[a][b][a]=B[a+4][b+4][a+2]*27;
	  }

    return 0;
}