#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(630, 160, 160, "random");
	double ***B = create_three_dim_double(450, 220, 420, "random");
	double *D = create_one_dim_double(340, "random");
	double *C = create_one_dim_double(690, "random");
	double *E = create_one_dim_double(60, "random");

	for (int d = 0; d < 159; d++)
	  for (int c = 0; c < 157; c++)
	    for (int b = 3; b < 55; b++)
	      for (int a = 3; a < 55; a++)
	      {
	        
	       D[a]=D[a-1]*0.301;
	        
	       E[a]=E[a+5]*0.81;
	        
	       E[a]=C[a]/B[a][b][c]+D[a]*A[a][b][c];
	        
	       C[a]=0.809;
	       C[a-1]=0.949;
	        
	       A[a][b][c]=E[a]/C[a]*B[a][b][c];
	       A[a+4][b+3][c+1]=0.188+E[a];
	      }

    return 0;
}