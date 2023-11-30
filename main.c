#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  int ID;
  char name[100];
  float score;
};

int main(int argc, char *argv[])
{
  //instance ¼±¾ð 
  struct student s1 = {2111825, "HYERI", 4.3};
  
  s1.ID = 123456;
  s1.name[0] = 'c';
  s1.score = 2.5;
  
  printf("ID : %i, name : %s, score : %f\n", s1.ID, s1.name, s1.score);
   
  strcpy(s1.name, "Bongjun");
  printf("name2: %s\n");
  
  system("PAUSE");	
  return 0;
}
