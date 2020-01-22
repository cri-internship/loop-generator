#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(290, 900, "zeros");
	double ***B = create_three_dim_double(590, 530, 690, "zeros");
	double **C = create_two_dim_double(510, 130, "zeros");

	for (int d = 0; d < 685; d++)
	  for (int c = 1; c < 125; c++)
	    for (int b = 4; b < 290; b++)
	      for (int a = 4; a < 290; a++)
	      {
	        
	       A[a][b]=A[a-4][b-1]*B[a][b][c]-0.7;
	        
	       C[a][b]=C[a+2][b+5]*0.454;
	        
	       B[a][b][c]=B[a+1][b+4][c+4]/0.162;
	        
	       A[a][b]=A[a][b+5]-0.418;
	        
	       B[a][b][c]=B[a+1][b+5][c+5]+0.706;
	        
	       B[a][b][c]=B[a+4][b+1][c]+A[a][b]-A[a][b];
	        
	       C[a][b]=C[a][b]-B[a][b][c];
	       A[a][b]=C[a-4][b-1]-B[a][b][c]*A[a][b];
	      }

    return 0;
}