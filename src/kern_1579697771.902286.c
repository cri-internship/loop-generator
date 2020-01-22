#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(490, 180, 620, "random");
	double ***C = create_three_dim_double(420, 970, 610, "random");
	double ***A = create_three_dim_double(680, 170, 620, "random");
	double **D = create_two_dim_double(420, 470, "random");
	double ***B = create_three_dim_double(830, 530, 230, "random");

	for (int c = 2; c < 610; c++)
	  for (int b = 5; b < 180; b++)
	    for (int a = 3; a < 418; a++)
	    {
	      
	      C[a][b][c]=C[a+2][b+2][c]/0.555;
	      
	      C[a][b][c]=E[a][b][c]/B[a][b][c]*D[a][b]-A[a][b][c];
	      E[a][b][c]=E[a-3][b-5][c-2]+C[a][b][c]/B[a][b][c]-C[a][b][c]*A[a][b][c];
	    }

    return 0;
}