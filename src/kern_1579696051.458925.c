#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(630, 440, 30, "random");
	double ***A = create_three_dim_double(480, 150, 70, "random");

	for (int d = 0; d < 65; d++)
	  for (int c = 0; c < 146; c++)
	    for (int b = 0; b < 475; b++)
	      for (int a = 0; a < 475; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+4][c+5]-B[a][b][c];
	        
	       B[a][b][c]=A[a][b][c]-B[a][b][c];
	       A[a][b][c]=A[a+5][b+2][c+4]*B[a][b][c];
	      }

    return 0;
}