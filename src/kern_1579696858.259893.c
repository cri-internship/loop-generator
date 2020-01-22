#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(90, 910, "zeros");
	double ***B = create_three_dim_double(920, 400, 690, "zeros");
	double ***A = create_three_dim_double(660, 360, 680, "zeros");

	for (int d = 0; d < 680; d++)
	  for (int c = 3; c < 360; c++)
	    for (int b = 3; b < 86; b++)
	      for (int a = 3; a < 86; a++)
	      {
	        
	       B[a][b][c]=C[a][b]-0.399;
	       B[a+1][b+2][c+4]=C[a][b]/A[a][b][c];
	        
	       B[a][b][c]=0.206;
	        
	       C[a][b]=B[a][b][c]/A[a][b][c];
	       C[a+4][b+2]=B[a][b][c]/A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]/0.741;
	       C[a][b]=A[a][b-1][c]+C[a][b];
	      }

    return 0;
}