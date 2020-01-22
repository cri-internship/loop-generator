#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(850, 600, 50, "random");
	int **A = create_two_dim_int(300, 360, "random");

	for (int d = 0; d < 49; d++)
	  for (int c = 0; c < 599; c++)
	    for (int b = 0; b < 848; b++)
	      for (int a = 0; a < 848; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+1][c+1]/10;
	      }

    return 0;
}