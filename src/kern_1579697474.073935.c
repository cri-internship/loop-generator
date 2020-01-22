#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(10, 140, "random");
	double ***C = create_three_dim_double(80, 30, 470, "random");
	double ***B = create_three_dim_double(560, 240, 480, "random");
	double ***A = create_three_dim_double(110, 210, 970, "random");

	for (int d = 4; d < 470; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 3; b < 80; b++)
	      for (int a = 3; a < 80; a++)
	      {
	        
	       C[a][b][c]=0.612;
	       C[a-3][b-4][c-4]=0.667;
	        
	       B[a][b][c]=A[a][b][c]-D[a][b];
	       B[a+4][b+4][c+1]=C[a][b][c]+A[a][b][c];
	        
	       C[a][b][c]=0.871;
	        
	       A[a][b][c]=B[a][b][c]-A[a][b][c]+D[a][b];
	       C[a][b][c]=B[a+2][b+3][c+4]-D[a][b]+A[a][b][c];
	      }

    return 0;
}