#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    vector <string> result ;
    string statment  ,help ;
    help.resize(100) ;
    char delimiter[256];
    int counter = 0 ;

    cout<<"Enter the Statement : \n " ;
    getline(cin,statment) ;
    cout<<"Enter the delimiter : \n " ;
    cin.getline (delimiter,256);

    for(int x = 0 ; x < statment.length() ; x++)
    {

       if(statment[x] != delimiter[0])
       {

           help[counter] = statment[x] ;
           counter+=1 ;


       }


      if(statment[x] == delimiter[0])
       {

            result.push_back(help) ;
            help = "" ;
            counter = 0 ;
            help.resize(100) ;
       }


    }
    result.push_back(help) ;
    for(int x = 0 ; x<result.size() ; x++)
    {
        cout<<result[x]<<" \n"   ;

    }


}


