#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(680, 420, "ones");
	int ***E = create_three_dim_int(700, 630, 10, "ones");
	int ***B = create_three_dim_int(100, 700, 580, "ones");
	int *C = create_one_dim_int(10, "ones");
	int *A = create_one_dim_int(10, "ones");

	for (int d = 0; d < 5; d++)
	  for (int c = 0; c < 420; c++)
	    for (int b = 0; b < 675; b++)
	      for (int a = 0; a < 675; a++)
	      {
	        
	       D[a][b]=D[a+5][b]*26;
	        
	       E[a][b][c]=45;
	       E[a][b+3][c+5]=31;
	      }

    return 0;
}