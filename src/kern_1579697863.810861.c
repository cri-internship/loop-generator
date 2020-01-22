#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(550, 400, "zeros");
	int ***E = create_three_dim_int(810, 910, 630, "zeros");
	int *B = create_one_dim_int(560, "zeros");
	int ***C = create_three_dim_int(850, 680, 530, "zeros");
	int **D = create_two_dim_int(730, 340, "zeros");

	for (int d = 0; d < 629; d++)
	  for (int c = 0; c < 400; c++)
	    for (int b = 0; b < 548; b++)
	      for (int a = 0; a < 548; a++)
	      {
	        
	       A[a][b]=A[a+2][b]/30;
	        
	       E[a][b][c]=E[a][b+4][c+1]*3;
	        
	       int var_a=B[a]-44;
	       int var_b=B[a]+50;
	      }

    return 0;
}