#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(820, 10, "zeros");
	float ***C = create_three_dim_float(890, 450, 870, "zeros");
	float ***A = create_three_dim_float(50, 580, 550, "zeros");
	float **D = create_two_dim_float(770, 440, "zeros");

	for (int d = 5; d < 545; d++)
	  for (int c = 4; c < 7; c++)
	    for (int b = 5; b < 47; b++)
	      for (int a = 5; a < 47; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-4][c-5]-A[a][b][c];
	        
	       C[a][b][c]=C[a][b-3][c-2]*B[a][b]/D[a][b]+A[a][b][c];
	        
	       B[a][b]=B[a+2][b]-0.907;
	        
	       D[a][b]=D[a+3][b+3]+C[a][b][c]*A[a][b][c];
	        
	       B[a][b]=C[a][b][c]*D[a][b];
	        
	       A[a][b][c]=D[a][b]-B[a][b];
	       A[a+3][b][c+5]=B[a][b];
	        
	       D[a][b]=0.733;
	      }

    return 0;
}