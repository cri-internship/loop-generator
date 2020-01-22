#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(380, 110, 990, "random");
	double ***B = create_three_dim_double(360, 530, 60, "random");
	double **C = create_two_dim_double(600, 770, "random");

	for (int d = 3; d < 769; d++)
	  for (int c = 0; c < 598; c++)
	    for (int b = 0; b < 598; b++)
	      for (int a = 0; a < 598; a++)
	      {
	        
	       C[a][b]=A[a][b][c];
	       C[a+2][b+1]=B[a][b][c];
	        
	       A[a][b][c]=C[a][b]*A[a][b][c];
	       B[a][b][c]=C[a][b-3]/B[a][b][c];
	      }

    return 0;
}