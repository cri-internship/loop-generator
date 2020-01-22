#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 840, 950, "zeros");
	float ***C = create_three_dim_float(400, 30, 470, "zeros");
	float **E = create_two_dim_float(410, 860, "zeros");
	float *D = create_one_dim_float(620, "zeros");
	float ***B = create_three_dim_float(240, 660, 500, "zeros");

	for (int d = 0; d < 470; d++)
	  for (int c = 3; c < 25; c++)
	    for (int b = 5; b < 400; b++)
	      for (int a = 5; a < 400; a++)
	      {
	        
	       D[a]=D[a-4]+0.542;
	        
	       C[a][b][c]=C[a][b+5][c]/E[a][b]-B[a][b][c]*D[a];
	        
	       D[a]=0.903;
	        
	       E[a][b]=E[a][b]*C[a][b][c];
	       A[a][b][c]=E[a-2][b-3]/A[a][b][c]+B[a][b][c];
	        
	       C[a][b][c]=E[a][b]/B[a][b][c]+0.121-C[a][b][c];
	       B[a][b][c]=E[a+2][b+1]*B[a][b][c]/D[a]-C[a][b][c]+A[a][b][c];
	      }

    return 0;
}