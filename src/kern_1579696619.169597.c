#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(470, 40, 990, "ones");
	int **B = create_two_dim_int(930, 690, "ones");

	for (int b = 4; b < 689; b++)
	  for (int a = 5; a < 926; a++)
	  {
	    
	     B[a][b]=B[a+4][b]+26;
	    
	     B[a][b]=46;
	    
	     int var_a=B[a][b]+29;
	     int var_b=B[a-5][b-3]*49;
	    
	     B[a][b]=B[a][b]/A[a][b][a];
	     A[a][b][a]=B[a+4][b+1]/A[a][b][a];
	  }

    return 0;
}