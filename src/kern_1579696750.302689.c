#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(870, 540, 610, "random");
	double ***B = create_three_dim_double(710, 970, 30, "random");

	for (int c = 5; c < 28; c++)
	  for (int b = 4; b < 539; b++)
	    for (int a = 5; a < 706; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-4][c-5]/0.211;
	      
	      A[a][b][c]=A[a+4][b+1][c+2]/0.382;
	      
	      B[a][b][c]=0.526;
	      B[a+4][b+1][c+2]=0.032;
	      
	      B[a][b][c]=B[a][b][c]-0.986;
	      A[a][b][c]=B[a-2][b-1][c-3]-A[a][b][c];
	      
	      double var_a=B[a][b][c]-0.406;
	      double var_b=B[a+2][b][c+2]*0.986;
	      
	      double var_c=B[a][b][c]-0.071;
	      double var_d=B[a+3][b+5][c+1]*0.06;
	    }

    return 0;
}