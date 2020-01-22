#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(720, 740, "zeros");
	double *D = create_one_dim_double(330, "zeros");
	double ***B = create_three_dim_double(500, 740, 530, "zeros");
	double *C = create_one_dim_double(590, "zeros");

	for (int d = 4; d < 530; d++)
	  for (int c = 3; c < 740; c++)
	    for (int b = 5; b < 325; b++)
	      for (int a = 5; a < 325; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-2][c-4]+C[a]-D[a]/A[a][b];
	        
	       C[a]=C[a-4]/0.821;
	        
	       B[a][b][c]=B[a-5][b-3][c-4]/C[a]*D[a]+A[a][b];
	        
	       A[a][b]=A[a+1][b]*0.964;
	        
	       D[a]=B[a][b][c]/B[a][b][c]+0.448;
	       D[a+5]=C[a]*A[a][b];
	      }

    return 0;
}