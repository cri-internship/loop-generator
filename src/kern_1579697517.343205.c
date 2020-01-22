#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(160, 360, 470, "zeros");
	int ***B = create_three_dim_int(80, 240, 370, "zeros");

	for (int b = 5; b < 360; b++)
	  for (int a = 4; a < 160; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-5][a]-23;
	    
	     A[a][b][a]=A[a-4][b-5][a-4]+3;
	  }

    return 0;
}