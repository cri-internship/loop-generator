#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(570, 740, 870, "ones");
	int *B = create_one_dim_int(240, "ones");

	for (int b = 0; b < 735; b++)
	  for (int a = 0; a < 567; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+5][a]/2;
	    
	     A[a][b][a]=A[a][b][a]+B[a];
	     B[a]=A[a+1][b+1][a]-45;
	  }

    return 0;
}