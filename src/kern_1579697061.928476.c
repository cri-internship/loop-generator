#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(750, "zeros");
	int ***B = create_three_dim_int(680, 930, 690, "zeros");
	int **E = create_two_dim_int(830, 640, "zeros");
	int ***A = create_three_dim_int(600, 930, 260, "zeros");
	int ***C = create_three_dim_int(540, 490, 740, "zeros");

	for (int d = 0; d < 258; d++)
	  for (int c = 0; c < 490; c++)
	    for (int b = 0; b < 536; b++)
	      for (int a = 0; a < 536; a++)
	      {
	        
	       C[a][b][c]=C[a+4][b][c+2]*A[a][b][c];
	        
	       A[a][b][c]=A[a+3][b][c+2]-6;
	      }

    return 0;
}