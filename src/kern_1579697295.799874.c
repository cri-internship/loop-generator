#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(60, 840, 430, "zeros");
	double ***A = create_three_dim_double(50, 460, 530, "zeros");
	double **B = create_two_dim_double(560, 370, "zeros");
	double **C = create_two_dim_double(930, 340, "zeros");
	double **D = create_two_dim_double(50, 320, "zeros");

	for (int d = 0; d < 430; d++)
	  for (int c = 0; c < 369; c++)
	    for (int b = 0; b < 60; b++)
	      for (int a = 0; a < 60; a++)
	      {
	        
	       A[a][b][c]=E[a][b][c]+D[a][b];
	       E[a][b][c]=B[a][b];
	        
	       B[a][b]=0.027;
	       B[a][b+1]=0.462;
	      }

    return 0;
}