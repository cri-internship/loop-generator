#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "ones");
	int **B = create_two_dim_int(530, 320, "ones");
	int ***C = create_three_dim_int(370, 740, 500, "ones");
	int *D = create_one_dim_int(120, "ones");

	for (int d = 0; d < 495; d++)
	  for (int c = 0; c < 737; c++)
	    for (int b = 3; b < 120; b++)
	      for (int a = 3; a < 120; a++)
	      {
	        
	       D[a]=D[a-3]-19;
	        
	       C[a][b][c]=C[a][b+1][c+5]*26;
	        
	       C[a][b][c]=C[a+5][b+3][c+4]+31;
	      }

    return 0;
}