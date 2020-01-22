#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(550, 850, "ones");
	double **C = create_two_dim_double(700, 620, "ones");
	double ***A = create_three_dim_double(420, 780, 710, "ones");

	for (int d = 0; d < 705; d++)
	  for (int c = 2; c < 619; c++)
	    for (int b = 5; b < 420; b++)
	      for (int a = 5; a < 420; a++)
	      {
	        
	       A[a][b][c]=A[a][b+5][c+5]-C[a][b];
	        
	       C[a][b]=C[a+5][b+1]-0.817;
	        
	       C[a][b]=0.409;
	        
	       B[a][b]=B[a][b]/A[a][b][c]+C[a][b];
	       C[a][b]=B[a-5][b-1]+C[a][b];
	      }

    return 0;
}