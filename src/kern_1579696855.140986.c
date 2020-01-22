#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(830, 640, 570, "ones");
	int **D = create_two_dim_int(280, 820, "ones");
	int ***C = create_three_dim_int(880, 800, 410, "ones");
	int **B = create_two_dim_int(650, 760, "ones");

	for (int b = 5; b < 640; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     D[a][b]=D[a-2][b-2]+1;
	    
	     A[a][b][a]=A[a-5][b-5][a-5]*B[a][b]+D[a][b];
	  }

    return 0;
}