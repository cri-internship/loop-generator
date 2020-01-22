#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(680, 690, "ones");
	int ***D = create_three_dim_int(680, 490, 170, "ones");
	int **E = create_two_dim_int(370, 60, "ones");
	int ***B = create_three_dim_int(640, 440, 720, "ones");
	int **C = create_two_dim_int(450, 360, "ones");

	for (int d = 5; d < 170; d++)
	  for (int c = 3; c < 59; c++)
	    for (int b = 5; b < 366; b++)
	      for (int a = 5; a < 366; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-2][c-1]*6;
	        
	       D[a][b][c]=D[a-3][b-3][c-5]-B[a][b][c];
	        
	       E[a][b]=E[a+4][b+1]*C[a][b];
	        
	       C[a][b]=C[a+5][b+4]/16;
	        
	       int var_a=E[a][b]*6;
	       int var_b=E[a-5][b-1]+34;
	      }

    return 0;
}