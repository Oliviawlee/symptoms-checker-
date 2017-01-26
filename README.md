# symptoms-checker-
/*To get back into coding again, my first project will essentially work similar to Webmd.com. The program will ask you several questions about your symptoms and if you respond yes for a certain symptom, it will potentially output a message and a direct link to a website with more details about the sickness determined. */


#include <iostream>

int main(int argc, const char * argv[]) {

    std::string response1 ;
    std::cout << " Welcome to Olivia's Webmd! If you are concerned about your health please answer the following questions...\n";
    std:: cout << " Are you coughing?\n";
    
    std::cin >> response1;
if (response1== "yes")
{ std::cout<< "You have a cold. Here is a link to help...\n";
  system("www.google.com");
    // need help with creating a direct link that users can click or launch
           
}
    else if (response1 != "yes")
    { std::cout<< " unable to detect sickness \n";
    }
   
    return 0;
}
