#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(870, 770, 20, "zeros");
	double ***B = create_three_dim_double(560, 610, 850, "zeros");
	double *C = create_one_dim_double(830, "zeros");
	double *D = create_one_dim_double(630, "zeros");
	double ***E = create_three_dim_double(290, 930, 640, "zeros");

	for (int d = 1; d < 17; d++)
	  for (int c = 3; c < 610; c++)
	    for (int b = 5; b < 286; b++)
	      for (int a = 5; a < 286; a++)
	      {
	        
	       B[a][b][c]=B[a][b-3][c-1]-D[a]*A[a][b][c]+C[a]/E[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+4][c+3]*0.876;
	        
	       D[a]=B[a][b][c];
	       D[a-3]=E[a][b][c]-C[a]*B[a][b][c];
	        
	       D[a]=B[a][b][c]-C[a];
	        
	       C[a]=C[a]*B[a][b][c]-A[a][b][c];
	       D[a]=C[a-5]/A[a][b][c]-E[a][b][c];
	        
	       A[a][b][c]=E[a][b][c]+B[a][b][c];
	       B[a][b][c]=E[a+4][b][c+2]+D[a]*C[a]-B[a][b][c];
	      }

    return 0;
}