#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(550, 510, 250, "zeros");
	double ***C = create_three_dim_double(100, 890, 480, "zeros");
	double ***B = create_three_dim_double(300, 40, 50, "zeros");
	double ***A = create_three_dim_double(730, 830, 560, "zeros");
	double **E = create_two_dim_double(30, 530, "zeros");

	for (int b = 0; b < 38; b++)
	  for (int a = 4; a < 295; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b][a]*E[a][b]+B[a][b][a];
	    
	     D[a][b][a]=D[a+3][b][a+3]+0.11;
	    
	     C[a][b][a]=B[a][b][a]*D[a][b][a]+A[a][b][a]-C[a][b][a]/C[a][b][a];
	     B[a][b][a]=B[a+1][b+2][a+5]-C[a][b][a]/0.656;
	  }

    return 0;
}