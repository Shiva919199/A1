#include <iostream>

using namespace std;

class List
{
    public:
    string CNS()
    { 
        cout<<"Name     : CNS Hospital "<<endl;
        cout<<"Address  : Nashik Road"<<endl;
        cout<<"Symptoms : fever, cough, sore_throat, body_aches"<<endl<<endl;
    }
    string Citycare()
    {
        cout<<"Name     : Citycare Hospital "<<endl;
        cout<<"Address  : College Road"<<endl;
        cout<<"Symptoms : sneezing, runny_nose, congestion"<<endl<<endl;
    }
    string Heart()
    {
        cout<<"Name     : Heart Hospital "<<endl;
        cout<<"Address  : Amrutdham"<<endl;
        cout<<"Symptoms : shortness_of_breath, chest_pain"<<endl<<endl;
    }
    string Narayani()
    {
        cout<<"Name     : Narayani Hospital "<<endl;
        cout<<"Address  : Jail Road"<<endl;
        cout<<"Symptoms : wheezing, coughing, chest_tightness"<<endl<<endl;
    }
    
};
void repeat()
    {
        string a, disease;
        List l;
        cout << "\n\nEnter a Symptoms to search for hospitals: ";
        cin>>disease;
        if(disease=="body_aches"||disease=="sore_throat"||disease=="cough"||disease=="fever")
        {
            cout<<"Disease = Flu\n"<<endl;
            l.CNS();
            cout<<"Do you want to know about the Services of this hospital : {Y/N} ";
            cin>>a;
            if(a=="Y"||a=="y")
            {
                cout<<"\n1] Emergency room services,\n2] Short-term hospitalization,\n3] X-ray/radiology services,\n4] General and specialty surgical services,\n5] Blood services,\n6] Laboratory services"<<endl;
            }
            else
            {
                repeat();
            }
        }

        if(disease=="sneezing"||disease=="runny_nose"||disease=="congestion")
        {
            cout<<"Disease = Cold\n"<<endl;
            l.Citycare();
            cout<<"Do you want to know about the Services of this hospital : {Y/N} ";
            cin>>a;
            if(a=="Y"||a=="y")
            {
                cout<<"\n1] Case management or social work services,\n2] Financial services,\n3] Family support services"<<endl;
            }
            else
            {
                repeat();
            }
        }

        if(disease=="shortness_of_breath"||disease=="chest_pain")
        {
            cout<<"Disease = Pneumonia\n"<<endl;
            l.Heart();
            cout<<"Do you want to know about the Services of this hospital : {Y/N} ";
            cin>>a;
            if(a=="Y"||a=="y")
            {
                cout<<"\n1] Home nursing services,\n2] Rehabilitation services and physical therapy,\n3] Good access to surgical specialists"<<endl;
            }
            else
            {
                repeat();
            }
        }

        if(disease=="wheezing"||disease=="coughing"||disease=="chest_tightness")
        {
            cout<<"Disease = Asthma\n"<<endl;
            l.Narayani();
            cout<<"Do you want to know about the Services of this hospital : {Y/N} ";
            cin>>a;
            if(a=="Y"||a=="y")
            {
                cout<<"\n1] Emergency room services,\n2] Family support services,\n3] X-ray/radiology services,\n4] Genetic testing and counseling"<<endl;
            }
            else
            {
                repeat();
            }
            
        }
        
    }

int main()
{
    string b;
    cout<<"List of Hospitals: " << endl<<endl;
    List l;
    l.CNS();
    l.Citycare();
    l.Heart();
    l.Narayani();
    repeat();
    cout<<"Do you want to continue : {Y/N}";
    cin>>b;
    if (b=="Y"||b=="y")
    {
        repeat();
    }
    else{}
}