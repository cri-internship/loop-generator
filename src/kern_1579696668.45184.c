#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(310, "random");
	double ***A = create_three_dim_double(340, 770, 390, "random");

	for (int c = 4; c < 385; c++)
	  for (int b = 4; b < 765; b++)
	    for (int a = 5; a < 307; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-4][c-4]*0.093;
	      
	      B[a]=B[a-2]*0.335;
	      
	      B[a]=B[a]*0.091;
	      
	      B[a]=B[a]-A[a][b][c];
	      B[a]=B[a+3]+0.699;
	      
	      double var_a=A[a][b][c]*0.626;
	      double var_b=A[a+3][b+5][c+5]/0.706;
	      
	      A[a][b][c]=A[a][b][c]/B[a];
	      B[a]=A[a-3][b-1][c]/B[a];
	    }

    return 0;
}