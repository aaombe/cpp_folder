#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::cout; 
using std::endl; 
using std::cin;
using std::ofstream; 
using std::ifstream;
using std::vector;
using std::string;
using std::to_string;

int get_user_input(); //get user input
vector<string> get_change (int amount); //return list of change
void out_put_stream (vector<string> change, string file); //write to file 
void in_put_stream (string filename); //read data from file
int main () {
  string filename("myfile.txt");
  int amout = get_user_input();
  vector<string> output = get_change(amout);
  out_put_stream(output, filename);
  in_put_stream (filename);
}

/**
 * @brief Get the user input
 * @return int amountt
 */
int get_user_input(){
  int amount;
  cout << "Enter the amount of change in cents: ";
  while ( amount < 1 || amount > 99){
    cout << "Amount between 1 and 99 (inclusive): ";
    cin>> amount;
  }
  return amount;
}
/**
 * @brief receive amount and calculate the change need
 * @param amount
 * @return vector<string> change
 */
vector<string> get_change (int amount){
  vector<string> ch;
  int ogAmount = amount;
  int quarters = amount / 25;
  amount = amount % 25; //set ammount to remaider 
  int dimes = amount / 10;
  amount = amount % 10; //set ammount to the remaider 
  int nickels = amount / 5;
  amount = amount % 5; //set ammount to remaider
  int pennies = amount;
  //convert int to str and add to list 
  ch.push_back (to_string(ogAmount) + " cents in coins can be given as:");
  ch.push_back (to_string(quarters)+ " quarters");
  ch.push_back (to_string(dimes) + " dimes");
  ch.push_back (to_string(nickels) + " nickels and");
  ch.push_back (to_string(pennies) + " pennies");
  return ch;
}
/**
 * @brief write to file original amount + change
 * @param change: change given
 * @param change : file
 */
void out_put_stream (vector<string> change, string file){
  ofstream f;
  f.open(file);
  if (!f.is_open()) {
        cout<< "Failed to open " << file<< endl;
  }else {
    for(auto i : change){
      f <<i <<endl;
    }
  }
}

/**
 * @brief read file and print data
 * @param filename 
 */
void in_put_stream (string filename){
  ifstream file;
  file.open(filename);
  if(file.is_open()){
    string line;
    while(getline(file, line)){
      cout << line <<endl;
    }
  }
  cout << filename;
}
