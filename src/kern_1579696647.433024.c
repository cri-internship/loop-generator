#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(720, 160, "zeros");
	double ***B = create_three_dim_double(840, 990, 630, "zeros");
	double ***A = create_three_dim_double(820, 310, 960, "zeros");
	double **E = create_two_dim_double(720, 770, "zeros");
	double ***C = create_three_dim_double(350, 970, 230, "zeros");

	for (int d = 0; d < 628; d++)
	  for (int c = 0; c < 160; c++)
	    for (int b = 5; b < 720; b++)
	      for (int a = 5; a < 720; a++)
	      {
	        
	       D[a][b]=D[a-5][b]/B[a][b][c]-0.473*A[a][b][c]+C[a][b][c];
	        
	       B[a][b][c]=D[a][b]*C[a][b][c];
	       B[a+3][b+3][c+2]=C[a][b][c]*D[a][b]/E[a][b];
	      }

    return 0;
}