#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(680, 340, 520, "ones");
	int *D = create_one_dim_int(160, "ones");
	int ***B = create_three_dim_int(280, 720, 820, "ones");
	int ***A = create_three_dim_int(50, 980, 310, "ones");

	for (int d = 1; d < 518; d++)
	  for (int c = 2; c < 339; c++)
	    for (int b = 3; b < 155; b++)
	      for (int a = 3; a < 155; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-2][c-1]+30;
	        
	       B[a][b][c]=B[a+4][b+2][c+4]/13;
	        
	       D[a]=D[a+5]/A[a][b][c]+C[a][b][c]*0;
	        
	       C[a][b][c]=28;
	        
	       int var_a=B[a][b][c]+33;
	       int var_b=B[a+3][b+4][c+1]-49;
	      }

    return 0;
}