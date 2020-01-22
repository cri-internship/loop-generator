#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(250, 300, 280, "ones");
	float ***B = create_three_dim_float(430, 360, 570, "ones");

	for (int d = 5; d < 280; d++)
	  for (int c = 5; c < 297; c++)
	    for (int b = 2; b < 248; b++)
	      for (int a = 2; a < 248; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b][c-5]/0.983;
	        
	       A[a][b][c]=A[a-2][b-5][c]+0.475;
	        
	       A[a][b][c]=A[a][b-3][c-2]*0.309;
	        
	       A[a][b][c]=A[a+2][b+3][c]*0.534;
	      }

    return 0;
}