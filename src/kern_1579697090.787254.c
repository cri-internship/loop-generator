#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(10, "zeros");
	int ***A = create_three_dim_int(960, 950, 80, "zeros");
	int **D = create_two_dim_int(80, 120, "zeros");
	int **C = create_two_dim_int(190, 160, "zeros");

	for (int d = 0; d < 115; d++)
	  for (int c = 0; c < 77; c++)
	    for (int b = 0; b < 77; b++)
	      for (int a = 0; a < 77; a++)
	      {
	        
	       D[a][b]=0;
	       D[a+3][b+5]=40;
	      }

    return 0;
}