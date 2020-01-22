#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(840, 960, 220, "random");
	double ***A = create_three_dim_double(100, 840, 100, "random");
	double *C = create_one_dim_double(620, "random");
	double **D = create_two_dim_double(480, 160, "random");
	double *E = create_one_dim_double(620, "random");

	for (int d = 4; d < 95; d++)
	  for (int c = 3; c < 837; c++)
	    for (int b = 4; b < 95; b++)
	      for (int a = 4; a < 95; a++)
	      {
	        
	       A[a][b][c]=0.044;
	       A[a-3][b-2][c-1]=0.23;
	        
	       B[a][b][c]=0.744;
	       B[a-4][b-3][c-4]=0.152;
	        
	       E[a]=0.236*D[a][b]-B[a][b][c];
	       E[a+5]=A[a][b][c]-A[a][b][c]/0.692;
	        
	       D[a][b]=C[a]/E[a]-B[a][b][c]+D[a][b]*A[a][b][c];
	       A[a][b][c]=C[a-3]/E[a]*B[a][b][c]+A[a][b][c]-0.509;
	        
	       E[a]=A[a][b][c]+E[a];
	       B[a][b][c]=A[a+5][b+3][c+5]*B[a][b][c];
	      }

    return 0;
}