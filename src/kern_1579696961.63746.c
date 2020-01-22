#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(300, 350, 970, "zeros");
	double ***C = create_three_dim_double(70, 960, 580, "zeros");
	double **A = create_two_dim_double(280, 60, "zeros");

	for (int b = 1; b < 58; b++)
	  for (int a = 5; a < 66; a++)
	  {
	    
	     A[a][b]=A[a-4][b-1]*B[a][b][a]+C[a][b][a];
	    
	     C[a][b][a]=C[a+2][b][a+1]*A[a][b];
	    
	     C[a][b][a]=C[a+1][b+2][a+4]*A[a][b];
	    
	     A[a][b]=A[a+2][b+2]*0.42;
	    
	     B[a][b][a]=A[a][b]+C[a][b][a]*B[a][b][a];
	     A[a][b]=A[a-5][b]*B[a][b][a];
	    
	     double var_a=A[a][b]*0.742;
	     double var_b=A[a+2][b]*0.742;
	  }

    return 0;
}