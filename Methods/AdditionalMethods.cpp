#include <iostream>
#include <limits>
using namespace std;

void pause(){ 
   /* ... */ 
   std::cout<<"PRESS ENTER TO START.........";
   /* ensure that std::cin is ready for inputs */ 
   std::cin.clear(); 
   /* ignore any pressed key until the <enter> key (included) */ 
   std::cin.ignore(  
      std::numeric_limits<std::streamsize>::max(), '\n'); 
} 

void breakLine(){
    cout<<" "<<endl;
}