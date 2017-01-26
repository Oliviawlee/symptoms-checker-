

#include <iostream>

int main(int argc, const char * argv[]) {

    // This is just a rough draft of the code as it is not anywhere near done...:((((//
    // So anyways I want to be able to have a clickable link for the user when he/she responds yes to the questions. 
     
    std::string response1 ;
    std::cout << " Welcome to Olivia's Webmd! If you are concerned about your health please answer the following questions...\n";
    std:: cout << " Are you coughing?\n";
    
    std::cin >> response1;
if (response1== "yes")
{ std::cout<< "You have a cold. Here is a link to help...\n";
  system("www.google.com");
    // this is where I want to insert the link.
 
           
}
    else if (response1 != "yes")
    { std::cout<< " unable to detect sickness \n";
    }
   
    return 0;
}
