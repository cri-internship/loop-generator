#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(320, 270, 50, "ones");
	int ***A = create_three_dim_int(660, 570, 610, "ones");

	for (int b = 0; b < 270; b++)
	  for (int a = 2; a < 320; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b][a-1]-6;
	    
	     A[a][b][a]=36;
	     A[a][b+2][a+3]=7;
	  }

    return 0;
}