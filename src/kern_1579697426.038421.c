#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(130, 890, 540, "zeros");
	int ***A = create_three_dim_int(30, 740, 850, "zeros");
	int *C = create_one_dim_int(670, "zeros");
	int ***D = create_three_dim_int(810, 890, 730, "zeros");

	for (int d = 0; d < 538; d++)
	  for (int c = 0; c < 889; c++)
	    for (int b = 0; b < 125; b++)
	      for (int a = 0; a < 125; a++)
	      {
	        
	       B[a][b][c]=0;
	       B[a+5][b+1][c+2]=40;
	      }

    return 0;
}