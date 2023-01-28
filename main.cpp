/* 
 * File:   main.cpp
 * Author: Dalton
 *
 * Created on November 6, 2016, 12:58 PM
 */
#define VERSION "1.05"
#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;

int main(int argc, char** argv) {
    
    uint64_t num=0, i=1,max=0;
    bool prime=true;//we're doing prime factors by default
    while (i<argc){
        string ram=argv[i];
        if(ram=="-a"){
            prime=false;
        }else if (ram=="-i"){
            cout<<"Factoring utility"<<endl<<"Created by Dalton on November 6, 2016, 12:58 PM"<<endl;
            cout<<"Version: "<<VERSION<<endl<<"Built on: "<<__DATE__<<" at "<<__TIME__<<endl;
        }else if (ram=="-h"){
            cout<<"Current executable command: "<<argv[0]<<endl;
            cout<<"Commands: \n-i\t Display Build information\n-a\t Switch to \"list\" factorization mode\n-h\t Display this text"<<endl;
            cout<<"Usages: <command> [<options> <input>]"<<endl<<endl;
            
        }else{
            int lgth=ram.length();
            for (int j = 0; j < lgth; j++) {//a very jenky way to convert a string into an integer, I coded this at 4AM
                num = num * 10;
                switch (ram[j]) {
                    case '1':
                        num += 1;
                        
                        break;
                    case'2':
                        num += 2;
                        
                        break;
                    case '3':
                        num += 3;
                        
                        break;
                    case '4':
                        num += 4;
                        
                        break;
                    case '5':
                        num += 5;
                        
                        break;
                    case '6':
                        num += 6;
                        
                        break;
                    case '7':
                        num += 7;
                        
                        break;
                    case '8':
                        num += 8;
                        
                        break;
                    case '9':
                        num += 9;
                        
                        break;
                }
                
            }
            
        }
        i++;
    }
    while(num==0){
        cout<<"Number: ";
        cin>>num;
        if(num==0){
            cout<<"Cannot factor 0\nFactors of 0 are 0"<<endl;
        }
    }
    if(num<0){
        num=0-num;
    }
    if(prime==true){
        i=2;
        cout<<"Prime factors of "<<num<<":"<<endl;
        max=num/2;
        while(i<=max){
            int j=0;
            while (num%i==0){
                j++;//count power of factor
                
                num=num/i;
            }
            if (j>0){//if there was a factor
                if(j>1){
                    cout<<i<<"^"<<j;//display how many factors found
                }else{
                    cout<<i;
                }
                cout<<"\t";
            }
            i++;
        }
        if(num>1){
            cout<<num<<endl;
        }else{
            cout<<endl;
        }
    }else{
        i=1;
        cout<<"Factors of "<<num<<":"<<endl;
        max=num/2;
        while(i<=max){
            
            if (num%i==0){
                cout<<i<<endl;
            }
            i++;
        }
        cout<<num<<endl;
    }
    
    return 0;
}

