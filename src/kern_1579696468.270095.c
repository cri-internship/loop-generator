#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(530, 180, "zeros");
	float ***D = create_three_dim_float(930, 480, 960, "zeros");
	float *C = create_one_dim_float(330, "zeros");
	float ***B = create_three_dim_float(410, 480, 860, "zeros");
	float ***A = create_three_dim_float(190, 790, 980, "zeros");

	for (int d = 5; d < 960; d++)
	  for (int c = 5; c < 178; c++)
	    for (int b = 4; b < 186; b++)
	      for (int a = 4; a < 186; a++)
	      {
	        
	       D[a][b][c]=D[a][b-5][c-3]*0.662;
	        
	       A[a][b][c]=A[a][b+5][c]+D[a][b][c]*C[a];
	        
	       A[a][b][c]=0.318;
	        
	       E[a][b]=0.021;
	       E[a+5][b+2]=A[a][b][c]/C[a]*B[a][b][c]+A[a][b][c];
	        
	       C[a]=A[a][b][c]+E[a][b]/E[a][b]-0.904*B[a][b][c];
	       A[a][b][c]=A[a-4][b][c-5]+B[a][b][c]/C[a]*D[a][b][c];
	      }

    return 0;
}