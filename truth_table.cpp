// Ryan DiRezze
// CS 225

#include "truth_table.hpp"
#include<cmath>
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// How to make a truth table
    // identify the sentence
    // define propositions from the sentence
    // capture the number of propositions
    // list the "initial" truth table piece (with values for ONLY propositions)
    // evaluate statements of 'propositional logic'

truth_table::truth_table(int prop, int total){
  numPropositions = prop;
  total_propositions = total;
  int a = pow(2, numPropositions);
  propositions = new bool[pow(2, numPropositions) * total];
}

void truth_table::setBasic_propositions(){
  cout << "Please enter the statement's propositions..." << endl;
  cout << endl;
  for(int i=0; i<numPropositions; i++){
    cin >> header[0][i];
  }
}

void truth_table::build_truth_table(){
  cout << "Truth table: " << endl << endl;
  for(int c=0; c<numPropositions; c++){
    for(int r=0; r<pow(2, numPropositions); r++){
      if(c == 0){
        propositions[r * c] = true;
        cout << propositions[r * c] << endl;
      }
      
    }
  }
}

// void truth_table::build_truth_table(){    // NOTE: need to find a way to populate truth table with varying proposition numbers; essentially half of the col. to left is T & F in next col.
//   cout << "Truth table: " << endl << endl;
//   for(int i=0; i<numPropositions; i++){
//     cout << header[0][i]; << endl;
//   }
//   // if(numPropositions == 2){
//   //   propositions[0][0] = "T";
//   //   propositions[0][1] = "T";
//   //   propositions[1][0] = "T";
//   // }
//   if(numPropositions == 2){
//     for(int c=0; c<numPropositions; c++){
//       for(int r=0; r<(pow(2, numPropositions)/2); r++){
//         propositions[r][c] = "T";
//       }
//       else if(r=pow(2, numPropositions); r<pow(2, numPropositions); r++){
//         propositions[r][c] = "F";
//       }
//     }
//   }
// }

int main(){
  truth_table table = truth_table(3, 5);
  table.build_truth_table();

  return 0;
}
