#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(490, 80, 270, "zeros");
	int ***B = create_three_dim_int(330, 690, 790, "zeros");
	int ***E = create_three_dim_int(520, 770, 10, "zeros");
	int **D = create_two_dim_int(430, 870, "zeros");
	int *A = create_one_dim_int(630, "zeros");

	for (int d = 0; d < 6; d++)
	  for (int c = 0; c < 769; c++)
	    for (int b = 4; b < 426; b++)
	      for (int a = 4; a < 426; a++)
	      {
	        
	       A[a]=A[a-4]*32;
	        
	       D[a][b]=D[a+4][b+2]+B[a][b][c];
	        
	       int var_a=E[a][b][c]+35;
	       int var_b=E[a+4][b+1][c+4]+15;
	      }

    return 0;
}