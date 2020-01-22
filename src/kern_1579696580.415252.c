#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(890, 870, "random");
	double ***C = create_three_dim_double(180, 460, 820, "random");
	double *B = create_one_dim_double(870, "random");
	double *D = create_one_dim_double(290, "random");
	double ***A = create_three_dim_double(260, 340, 860, "random");

	for (int d = 0; d < 816; d++)
	  for (int c = 0; c < 455; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       C[a][b][c]=C[a][b+5][c+4]*0.513;
	        
	       B[a]=B[a+3]-0.038;
	        
	       D[a]=B[a]-C[a][b][c]*D[a]/A[a][b][c]+E[a][b];
	       E[a][b]=B[a-5]-C[a][b][c]/E[a][b]*0.681;
	        
	       double var_a=B[a]/0.276;
	       double var_b=B[a-4]*0.296;
	      }

    return 0;
}