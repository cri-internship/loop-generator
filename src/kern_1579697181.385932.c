#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(10, 720, 640, "ones");
	int ***B = create_three_dim_int(20, 610, 870, "ones");

	for (int b = 5; b < 608; b++)
	  for (int a = 2; a < 6; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-2][a-2]*43;
	    
	     B[a][b][a]=B[a-1][b-4][a-1]/40;
	    
	     B[a][b][a]=B[a+5][b+2][a+4]/29;
	    
	     B[a][b][a]=B[a+3][b][a+4]/45;
	    
	     A[a][b][a]=A[a+4][b+5][a+3]/B[a][b][a];
	  }

    return 0;
}