#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(280, "zeros");
	double ***E = create_three_dim_double(260, 130, 850, "zeros");
	double *D = create_one_dim_double(140, "zeros");
	double ***A = create_three_dim_double(980, 540, 560, "zeros");
	double ***C = create_three_dim_double(730, 450, 680, "zeros");

	for (int d = 0; d < 680; d++)
	  for (int c = 5; c < 450; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       D[a]=D[a-2]-0.155;
	        
	       B[a]=E[a][b][c];
	       B[a]=0.266-D[a]/C[a][b][c];
	        
	       C[a][b][c]=B[a]/D[a]*A[a][b][c]+E[a][b][c];
	       C[a-5][b-5][c]=A[a][b][c]*D[a];
	      }

    return 0;
}