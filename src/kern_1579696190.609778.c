#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(890, "random");
	float ***A = create_three_dim_float(700, 410, 650, "random");
	float ***B = create_three_dim_float(900, 840, 90, "random");
	float **C = create_two_dim_float(550, 840, "random");

	for (int d = 0; d < 89; d++)
	  for (int c = 0; c < 405; c++)
	    for (int b = 0; b < 546; b++)
	      for (int a = 0; a < 546; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b][c+1]+C[a][b]*D[a]-A[a][b][c];
	        
	       A[a][b][c]=A[a][b+5][c+2]-0.535;
	        
	       C[a][b]=B[a][b][c]*A[a][b][c];
	       C[a+4][b+3]=B[a][b][c];
	      }

    return 0;
}