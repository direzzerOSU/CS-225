// Ryan DiRezze

#ifndef TRUTH_TABLE_H
#define TRUTH_TABLE_H

#include<string>
#include<cmath>

class truth_table{
private:
  int numPropositions = 0;
  int num_logic_statements = 0;
  int total_propositions = 0;
  // std::string* propositions[pow(2, numPropositions)][numPropositions];
  bool* propositions;    // double array truth_table
  std::string* header = new std::string[total_propositions];
public:
  truth_table(int prop, int total);
  void setBasic_propositions();
  std::string getPropositions();
  void setNum_propositions();
  void setNum_logic_statements();
  void build_truth_table();
};
#endif
