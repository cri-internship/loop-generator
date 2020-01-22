#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(890, 740, 740, "random");
	double ***B = create_three_dim_double(610, 220, 290, "random");
	double ***C = create_three_dim_double(600, 130, 970, "random");

	for (int c = 2; c < 285; c++)
	  for (int b = 3; b < 128; b++)
	    for (int a = 2; a < 600; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b][c-1]*A[a][b][c]/0.406;
	      
	      A[a][b][c]=A[a-1][b-3][c-2]/B[a][b][c]-C[a][b][c];
	      
	      B[a][b][c]=C[a][b][c];
	      
	      C[a][b][c]=C[a][b][c]-A[a][b][c];
	      B[a][b][c]=C[a][b+2][c+3]+B[a][b][c]-A[a][b][c];
	    }

    return 0;
}