#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(250, 560, 120, "zeros");
	float **E = create_two_dim_float(550, 700, "zeros");
	float **C = create_two_dim_float(620, 900, "zeros");
	float ***A = create_three_dim_float(370, 290, 960, "zeros");
	float **D = create_two_dim_float(730, 770, "zeros");

	for (int d = 2; d < 770; d++)
	  for (int c = 2; c < 620; c++)
	    for (int b = 2; b < 620; b++)
	      for (int a = 2; a < 620; a++)
	      {
	        
	       D[a][b]=D[a-2][b-2]*0.12;
	        
	       C[a][b]=C[a][b+5]/D[a][b]*A[a][b][c];
	      }

    return 0;
}