#include <cstdio>  
#include <cstdlib>  
#include <iostream>  
#include "_pause.h" 

 
 

    using namespace std; 

    int main(){ 

        const double dPaymentRate = 0.3; 

        string stdname, course, yrname; 

        int yrLvl; 

        double units, tFee, dpayment; 

 

        cout << "\n\t\tInput Values Here:\n\n"; 

        cout << "\tStudent Name\t:"; 

        getline(cin, stdname); 

        //////////////////////////////// 

        cout << "\tProgram/Course\t:"; 

        getline(cin, course); 

        //////// 

        cout << "\tYear Level\t:";  

        cin >> yrlvel; 

        //////////////////////////////// 

        cout << "\t# of Units\t:"; 

        cin >> units; 

        cout << "\t------------------------------------------"; 

        if(yrLvl===1){ 

            yrname = "Freshman"; 

            tFee = units * 1500; 

        }else if(yrLvl===2){ 

            yrname = "Sophomore"; 

            tFee = units * 1800; 

        }else if(yrLvl===3){ 

            yrname = "Junior"; 

            tFee = units * 2000; 

        }else if(yrLvl===4 || yrLvl===5){ 

            yrname = "Senior"; 

            tFee = units * 2300; 

        } 

        dpayment = tFee * dPaymentRate; 

        //////////////////////////////////////////////////////////////// 

        cout << "\n\n\t\tENROLLMENT SLIP\n\n" 

             << "\n\tStudent Name\t:" << stdname; 

             << "\n\tProgram Course\t:" << course; 

             << "\n\tYear Name\t:" << yrname; 

             << "\n\t# of Units\t:" << units; 

             << "\n\tTuition Fee\t:" << tFee; 

             << "\n\tDown Payment\t:" << dpayment; 

             << "\n\tBalance\t:" << tFee - dpayment;  

            cin.get(); 

        _pause(); 
        return EXIT_SUCCESS; 
    } 