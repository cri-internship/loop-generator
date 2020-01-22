#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(690, 110, 400, "random");
	double ***A = create_three_dim_double(550, 470, 820, "random");
	double ***D = create_three_dim_double(390, 320, 480, "random");
	double ***C = create_three_dim_double(310, 610, 570, "random");

	for (int d = 4; d < 400; d++)
	  for (int c = 4; c < 110; c++)
	    for (int b = 4; b < 305; b++)
	      for (int a = 4; a < 305; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b][c-3]/0.437;
	        
	       C[a][b][c]=0.949;
	       C[a+5][b+2][c+1]=0.826;
	        
	       D[a][b][c]=0.307;
	       D[a-4][b-3][c-4]=0.075;
	        
	       A[a][b][c]=C[a][b][c]/B[a][b][c]*A[a][b][c]-D[a][b][c];
	       C[a][b][c]=C[a][b-4][c-1]-A[a][b][c]*B[a][b][c];
	      }

    return 0;
}