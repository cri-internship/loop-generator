#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(610, 450, "zeros");
	int ***B = create_three_dim_int(340, 140, 210, "zeros");
	int ***D = create_three_dim_int(990, 720, 620, "zeros");
	int ***A = create_three_dim_int(290, 890, 540, "zeros");

	for (int d = 3; d < 210; d++)
	  for (int c = 4; c < 137; c++)
	    for (int b = 4; b < 287; b++)
	      for (int a = 4; a < 287; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+3][c]-6;
	        
	       C[a][b]=C[a+3][b+2]+13;
	        
	       int var_a=C[a][b]*47;
	       int var_b=C[a-2][b-4]+17;
	        
	       B[a][b][c]=A[a][b][c]+B[a][b][c]-C[a][b];
	       C[a][b]=A[a+3][b+1][c+1]*D[a][b][c]/B[a][b][c];
	        
	       int var_c=D[a][b][c]/1;
	       int var_d=D[a-4][b-4][c-3]/8;
	      }

    return 0;
}