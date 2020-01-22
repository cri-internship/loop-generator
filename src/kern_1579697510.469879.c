#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(840, 750, 80, "ones");
	int ***B = create_three_dim_int(900, 280, 310, "ones");

	for (int b = 5; b < 280; b++)
	  for (int a = 3; a < 837; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-5][a-1]+42;
	    
	     B[a][b][a]=B[a+4][b][a]/A[a][b][a];
	    
	     A[a][b][a]=46;
	    
	     A[a][b][a]=B[a][b][a]-A[a][b][a];
	     B[a][b][a]=B[a][b][a+4]+9;
	  }

    return 0;
}