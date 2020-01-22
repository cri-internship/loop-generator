#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(20, 190, "zeros");
	double ***A = create_three_dim_double(540, 60, 330, "zeros");
	double ***B = create_three_dim_double(950, 610, 890, "zeros");

	for (int c = 0; c < 328; c++)
	  for (int b = 4; b < 55; b++)
	    for (int a = 4; a < 15; a++)
	    {
	      
	      C[a][b]=C[a-4][b]-0.714;
	      
	      A[a][b][c]=A[a+2][b+5][c+2]/0.084;
	      
	      C[a][b]=A[a][b][c];
	      
	      double var_a=A[a][b][c]-0.719;
	      double var_b=A[a+1][b+1][c+2]+0.858;
	      
	      double var_c=C[a][b]-0.441;
	      double var_d=C[a-2][b-4]/0.698;
	    }

    return 0;
}