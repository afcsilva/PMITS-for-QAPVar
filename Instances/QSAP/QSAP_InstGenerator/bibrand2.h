#ifndef _RAND_H2
#define _RAND_H2

class Bibrand{ 

 public:

  int seed;
  Bibrand(int s);
  int get_rand_ij(int i, int j );
  int get_rand(int size );
  float randp();
  int trand();
};

#endif
