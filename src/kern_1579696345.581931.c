#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(720, 1000, 740, "random");
	double **E = create_two_dim_double(280, 70, "random");
	double **C = create_two_dim_double(960, 730, "random");
	double *B = create_one_dim_double(820, "random");
	double **D = create_two_dim_double(920, 230, "random");

	for (int d = 0; d < 67; d++)
	  for (int c = 0; c < 278; c++)
	    for (int b = 0; b < 278; b++)
	      for (int a = 0; a < 278; a++)
	      {
	        
	       E[a][b]=E[a+2][b+3]-B[a]+D[a][b]/C[a][b]*A[a][b][c];
	        
	       C[a][b]=E[a][b]-B[a]/E[a][b]*D[a][b];
	       C[a+1][b+2]=D[a][b]-E[a][b];
	      }

    return 0;
}