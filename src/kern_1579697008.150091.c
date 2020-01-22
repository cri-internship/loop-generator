#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(890, 240, 640, "random");
	float **A = create_two_dim_float(190, 310, "random");
	float ***E = create_three_dim_float(530, 160, 930, "random");
	float *C = create_one_dim_float(880, "random");
	float **D = create_two_dim_float(290, 540, "random");

	for (int d = 5; d < 635; d++)
	  for (int c = 4; c < 155; c++)
	    for (int b = 5; b < 186; b++)
	      for (int a = 5; a < 186; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-4][c-5]/0.638;
	        
	       B[a][b][c]=B[a+3][b][c+4]+0.02;
	        
	       B[a][b][c]=B[a+4][b+4][c+5]+E[a][b][c]*A[a][b]/0.742-C[a];
	        
	       A[a][b]=A[a+4][b+1]-B[a][b][c]+E[a][b][c]*B[a][b][c]/D[a][b];
	        
	       E[a][b][c]=E[a][b+5][c+4]*A[a][b]-C[a]/B[a][b][c]+D[a][b];
	        
	       C[a]=E[a][b][c]/B[a][b][c]*A[a][b];
	       C[a-5]=D[a][b]+B[a][b][c];
	      }

    return 0;
}