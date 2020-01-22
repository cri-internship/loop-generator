#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(330, 880, "ones");
	float ***A = create_three_dim_float(650, 840, 800, "ones");
	float **B = create_two_dim_float(320, 850, "ones");
	float **C = create_two_dim_float(940, 480, "ones");

	for (int d = 1; d < 478; d++)
	  for (int c = 0; c < 315; c++)
	    for (int b = 0; b < 315; b++)
	      for (int a = 0; a < 315; a++)
	      {
	        
	       C[a][b]=C[a+3][b+2]*0.151;
	        
	       B[a][b]=A[a][b][c];
	       B[a+5][b+1]=0.461/D[a][b];
	        
	       A[a][b][c]=C[a][b]*B[a][b];
	       B[a][b]=C[a][b-1]-A[a][b][c]*B[a][b]/D[a][b];
	      }

    return 0;
}