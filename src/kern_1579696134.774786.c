#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(150, 1000, 880, "ones");
	float ***B = create_three_dim_float(620, 30, 970, "ones");

	for (int d = 0; d < 965; d++)
	  for (int c = 0; c < 26; c++)
	    for (int b = 0; b < 616; b++)
	      for (int a = 0; a < 616; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+4][c+5]*0.552;
	        
	       B[a][b][c]=B[a][b][c]+A[a][b][c];
	       A[a][b][c]=B[a+3][b+3][c+5]/A[a][b][c];
	      }

    return 0;
}