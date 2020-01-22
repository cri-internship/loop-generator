#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(810, 790, 790, "zeros");
	int ***C = create_three_dim_int(30, 920, 560, "zeros");
	int ***A = create_three_dim_int(100, 950, 690, "zeros");
	int ***E = create_three_dim_int(610, 510, 450, "zeros");
	int **B = create_two_dim_int(1000, 70, "zeros");

	for (int d = 3; d < 446; d++)
	  for (int c = 5; c < 505; c++)
	    for (int b = 5; b < 605; b++)
	      for (int a = 5; a < 605; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-5][c-3]*B[a][b];
	        
	       E[a][b][c]=E[a+5][b+5][c]*23;
	        
	       E[a][b][c]=E[a+3][b+4][c+4]+C[a][b][c]*D[a][b][c]-A[a][b][c];
	        
	       int var_a=D[a][b][c]+27;
	       int var_b=D[a-5][b-2][c-2]-23;
	      }

    return 0;
}