#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(630, 370, 710, "ones");
	float ***B = create_three_dim_float(230, 820, 470, "ones");
	float ***C = create_three_dim_float(100, 200, 710, "ones");

	for (int d = 0; d < 467; d++)
	  for (int c = 3; c < 365; c++)
	    for (int b = 0; b < 225; b++)
	      for (int a = 0; a < 225; a++)
	      {
	        
	       A[a][b][c]=A[a][b-3][c]*0.617;
	        
	       B[a][b][c]=B[a+4][b+1][c+3]+0.371;
	        
	       B[a][b][c]=B[a+5][b+1][c+1]+0.31/A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]+B[a][b][c]/B[a][b][c];
	       B[a][b][c]=A[a+5][b+5][c+3]-C[a][b][c];
	      }

    return 0;
}