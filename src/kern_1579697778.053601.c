#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(210, 110, 880, "ones");
	int ***C = create_three_dim_int(730, 810, 340, "ones");
	int **A = create_two_dim_int(910, 210, "ones");

	for (int d = 4; d < 338; d++)
	  for (int c = 5; c < 107; c++)
	    for (int b = 4; b < 207; b++)
	      for (int a = 4; a < 207; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-5][c-4]/A[a][b]*B[a][b][c];
	        
	       C[a][b][c]=C[a][b-3][c]-A[a][b];
	        
	       B[a][b][c]=B[a+3][b+3][c+4]+48;
	        
	       C[a][b][c]=C[a+3][b][c+2]/12;
	        
	       int var_a=A[a][b]+5;
	       int var_b=A[a+3][b+4]-28;
	      }

    return 0;
}