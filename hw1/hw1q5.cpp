/**
 * Incorrect code to identify palindromes
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring> 

using namespace std;

void helper (ifstream &input, int len)
{
	string s;
	if(len==0){
		input>>s;
		cout<<s;
		//output<<endl;
	}
	else{
		input>>s;
		//cout<<"s: "<<s<<endl;
		helper(input, len-1);
		cout<<s<<endl;	
	}

}
//do not change the main function.
int main (int argc, char* argv[])
{
  if(argc < 2){
    cout << "Please provide a input file name." << endl;
    return 1;
  }
  ifstream in_file;
  ofstream out_file;
  //cout<<"argv[1]: "<<argv[1]<<endl;
  in_file.open(argv[1]);
  int len;
  in_file>>len;
  //cout<<"len is: "<<len<<endl;
  helper(in_file, len);
  in_file.close();
  return 0;
}
