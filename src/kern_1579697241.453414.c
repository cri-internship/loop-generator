#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(540, 950, 160, "random");
	double **E = create_two_dim_double(720, 510, "random");
	double *B = create_one_dim_double(80, "random");
	double **D = create_two_dim_double(570, 450, "random");
	double **C = create_two_dim_double(40, 890, "random");

	for (int d = 5; d < 445; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 4; b < 80; b++)
	      for (int a = 4; a < 80; a++)
	      {
	        
	       E[a][b]=C[a][b]*A[a][b][c]/D[a][b];
	       E[a-4][b-5]=B[a]-C[a][b];
	        
	       E[a][b]=A[a][b][c]+C[a][b];
	        
	       B[a]=E[a][b]+E[a][b];
	       B[a-1]=E[a][b]/0.33*D[a][b];
	        
	       D[a][b]=D[a][b]/E[a][b]+0.496*C[a][b];
	       B[a]=D[a+1][b+5]-C[a][b];
	      }

    return 0;
}