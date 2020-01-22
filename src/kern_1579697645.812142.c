#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(250, "ones");
	double ***A = create_three_dim_double(490, 100, 430, "ones");
	double ***C = create_three_dim_double(430, 700, 740, "ones");
	double *D = create_one_dim_double(700, "ones");
	double **E = create_two_dim_double(590, 580, "ones");

	for (int c = 0; c < 737; c++)
	  for (int b = 0; b < 695; b++)
	    for (int a = 4; a < 247; a++)
	    {
	      
	      D[a]=0.874;
	      float  var_a=D[a]/0.095;
	      
	      B[a]=0.506;
	      float  var_b=B[a]*0.143;
	      
	      D[a]=D[a-4]*0.417;
	      
	      B[a]=B[a+3]-0.842;
	      
	      C[a][b][c]=0.5;
	      C[a+2][b+5][c+3]=0.721;
	      
	      double var_c=D[a]+0.666;
	      double var_d=D[a-2]-0.023;
	      
	      double var_e=D[a]+0.35;
	      double var_f=D[a-1]-0.353;
	    }

    return 0;
}