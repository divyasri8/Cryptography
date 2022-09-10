#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    int a,key;
    string in;
    cout<<"Press 1 to encryprt file : \n Press 2 to decrypt file: ";
    cin>>a;
    cout<<"Enter the file name: ";
    cin>>in;
    cout<<"Enter the key: ";
    cin>>key;
    if(a==1){
        char c;
        ifstream fin;
        ofstream fout;
        fin.open(in.c_str(),ios::binary);
        in="output";
        fout.open(in.c_str(),ios::binary);
        while(!fin.eof()){
            fin>>noskipws>>c;
            int temp = c+key;
            fout<<(char)temp;        
        }
        fin.close();
        fout.close();
    }
    else if(a==2){
        char c;
        ifstream fin;
        ofstream fout;
        fin.open(in.c_str(),ios::binary);
        in="qutput";
        fout.open(in.c_str(),ios::binary);
        while(!fin.eof()){
            fin>>noskipws>>c;
            int temp =c-key;
            fout<<(char)temp;
        }
        fin.close();
        fout.close();
    }
    getch();


}