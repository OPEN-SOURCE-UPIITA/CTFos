#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool verifyLogin( const string& username,
		  const string& password,
		  const string& filename){

  ifstream inFile(filename);

  if(!inFile){
    cout<<"No existe el archivo.\n";
    return false;
  }

  string line;
  string record = username + ',' + password;

  while(getline(inFile,line)){
    if(line==record){
      return true;
    }
  }
  return false;
}


void registerNewUser(const string &username,
		     const string &password, 
		     const string &filename){

  ofstream outFile(filename, ios::app);

  if(!outFile){
    cout << "Error: No se pudo abrir el archivo para escritura.\n";
    return;
  }

  outFile << username << "," << password << "\n";
  
}
