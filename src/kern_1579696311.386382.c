#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(100, 510, "random");
	double *A = create_one_dim_double(610, "random");
	double ***E = create_three_dim_double(610, 750, 240, "random");
	double **D = create_two_dim_double(650, 270, "random");
	double ***B = create_three_dim_double(440, 730, 740, "random");

	for (int d = 4; d < 240; d++)
	  for (int c = 5; c < 265; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       D[a][b]=D[a-2][b-5]*A[a]-B[a][b][c]/C[a][b];
	        
	       A[a]=A[a+4]*E[a][b][c]/D[a][b]-E[a][b][c]+C[a][b];
	        
	       E[a][b][c]=E[a+5][b+1][c]*0.312;
	        
	       C[a][b]=D[a][b];
	       C[a-1][b-5]=B[a][b][c]+D[a][b]*0.112;
	        
	       double var_a=B[a][b][c]+0.181;
	       double var_b=B[a+5][b+1][c]+0.552;
	        
	       C[a][b]=D[a][b]-0.425+B[a][b][c]*C[a][b]/E[a][b][c];
	       D[a][b]=D[a][b+5]*C[a][b];
	        
	       B[a][b][c]=E[a][b][c]+A[a]*0.455;
	       E[a][b][c]=E[a-5][b-2][c-4]*B[a][b][c]+C[a][b];
	      }

    return 0;
}