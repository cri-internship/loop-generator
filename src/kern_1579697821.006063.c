#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(260, 930, 360, "zeros");
	double ***B = create_three_dim_double(520, 210, 510, "zeros");

	for (int d = 4; d < 359; d++)
	  for (int c = 5; c < 207; c++)
	    for (int b = 3; b < 258; b++)
	      for (int a = 3; a < 258; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-5][c-4]/0.377;
	        
	       A[a][b][c]=A[a+2][b+4][c+1]/B[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+3][c+4]*0.603;
	        
	       B[a][b][c]=0.424;
	        
	       B[a][b][c]=B[a][b][c]*A[a][b][c];
	       A[a][b][c]=B[a-2][b-4][c-1]+0.238;
	        
	       B[a][b][c]=A[a][b][c]+B[a][b][c];
	       A[a][b][c]=A[a-3][b-1][c-4]+B[a][b][c];
	      }

    return 0;
}