#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(630, 340, "random");
	float **D = create_two_dim_float(240, 550, "random");
	float **B = create_two_dim_float(420, 620, "random");
	float ***E = create_three_dim_float(520, 160, 190, "random");
	float ***C = create_three_dim_float(320, 560, 80, "random");

	for (int d = 1; d < 77; d++)
	  for (int c = 5; c < 160; c++)
	    for (int b = 4; b < 240; b++)
	      for (int a = 4; a < 240; a++)
	      {
	        
	       E[a][b][c]=E[a-4][b][c-1]*0.487;
	        
	       A[a][b]=A[a-3][b-1]-0.535;
	        
	       D[a][b]=D[a-2][b-5]-0.183;
	        
	       C[a][b][c]=C[a+2][b+5][c+3]+0.428;
	        
	       E[a][b][c]=E[a+1][b][c+1]-0.275*C[a][b][c];
	        
	       A[a][b]=B[a][b]+D[a][b]*E[a][b][c];
	      }

    return 0;
}