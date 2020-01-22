#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(560, "zeros");
	int ***E = create_three_dim_int(320, 710, 580, "zeros");
	int ***B = create_three_dim_int(970, 950, 190, "zeros");
	int **C = create_two_dim_int(390, 280, "zeros");
	int ***A = create_three_dim_int(510, 830, 150, "zeros");

	for (int d = 0; d < 148; d++)
	  for (int c = 2; c < 280; c++)
	    for (int b = 4; b < 390; b++)
	      for (int a = 4; a < 390; a++)
	      {
	        
	       C[a][b]=C[a-1][b-2]/45;
	        
	       D[a]=D[a-4]*10;
	        
	       A[a][b][c]=A[a+5][b+1][c+2]/43;
	      }

    return 0;
}