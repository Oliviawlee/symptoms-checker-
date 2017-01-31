

#include <iostream>

int main(int argc, const char * argv[]) {

    std::string response2;
    std::cout << " Welcome to Olivia's Webmd! If you are concerned about your health please answer the following question.\n";
    std:: string sickness [6];
    sickness[0]="allergies\n";
    sickness[1]="There is no common sickness for headaches. Your headache may be caused by stress, hormonal changes or lack of sleep. Not to worry, your headache should go away soon. \n";
    sickness[2]="flu or airborne sickness\nf";
    sickness[3]="Stomach flu or food poisoning\n";
    sickness[4]="Common cold or bronchitis\n";
    sickness[5]="common cold or allergies \n";
    std:: string symptom [6];
    symptom[0]= "sneezing";
    symptom[1]= "headache";
    symptom[2]= "fever";
    symptom[3]= "vomiting";
    symptom[4]= "coughing";
    symptom[5]= "sinus";
    std::cout << " \nList one of your symptoms... ( sneezing, headache, fever, vomiting, coughing, or sinus)";
    std::cin >> response2;
    if (response2.compare(symptom[0])==0)
    {std:: cout << sickness[0];
    }
    else if (response2.compare(symptom[0])!=0)
        {std::cout << "";
        }
   if (response2.compare(symptom[1])==0)
   {std::cout << sickness[1];
   }
   else if (response2 != symptom[1])
   {std::cout << "";
   }
   if (response2.compare(symptom[2])==0)
   {std:: cout << sickness[2];
   }
   else if (response2.compare(symptom[2])!=0)
   {std::cout << "";
   }
    if (response2.compare(symptom[3])==0)
    {std::cout << sickness[3];
    }
    else if (response2.compare(symptom[3])!=0)
    {std::cout << "";
    }
    if (response2.compare(symptom[4])==0)
    {std:: cout << sickness[4];
    }
    else if (response2.compare(symptom[4])!=0)
    {std::cout << "";
    }
    if (response2.compare(symptom[5])==0)
    {std::cout << sickness[5];
    }
    else if (response2.compare(symptom[5])!=0)
    {std::cout << "";
    }
   // so I basically want to have a clickable link whenever a sickness is detected. The link would be something like a health page with more info on the specific sickness. 
    
    return 0;
}
