#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(850, 890, 300, "ones");
	double ***D = create_three_dim_double(950, 340, 510, "ones");
	double ***E = create_three_dim_double(820, 570, 580, "ones");
	double ***A = create_three_dim_double(500, 910, 200, "ones");
	double *B = create_one_dim_double(570, "ones");

	for (int d = 0; d < 505; d++)
	  for (int c = 0; c < 337; c++)
	    for (int b = 0; b < 946; b++)
	      for (int a = 0; a < 946; a++)
	      {
	        
	       D[a][b][c]=D[a+3][b+3][c+5]/B[a]-C[a][b][c]+E[a][b][c]*0.693;
	        
	       D[a][b][c]=D[a+4][b+1][c+1]*0.744;
	      }

    return 0;
}