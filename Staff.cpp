#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <string>
#include <string.h>
#include<fstream>
#include"Staff.h";

Staff::Staff()
{
    Qualification = "";
    Role = "";
    OutletId = 0;
    SID = 0;
}

Staff::Staff(string q, string r, int o, int id)
{
    Qualification = q;
    Role = r;
    OutletId = o;
    SID = id;
}
void Staff::set_qualification(string q)
{
    Qualification = q;
}
int Staff::get_SID()
{
    return SID;
 }

void Staff::set_role(string r)
{
    Role = r;
}

void Staff::set_outletId(int o)
{
    OutletId = o;
}
string Staff::get_qualification()
{
    return Qualification;
}

string Staff::get_role()
{
    return Role;
}

int Staff::get_outletId()
{
    return OutletId;
}

void Staff::AddStaff()
{

}

void Staff::UpdateStaff()
{

}


Staff::~Staff()
{
    Qualification = "";
    Role = "";
    OutletId = 0;
    SID = 0;
}


void StoreAdmin::AddOutlet(Outlet A)
{
    A.AddOutlet();
}

void StoreManager::ViewAttendance()
{
    string line;
    ifstream myfile("Attendence.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

char* getcurrtime()
{
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);
    // convert now to tm struct for UTC
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    return dt;
}

void SalesAgent::MarkAttendence(int id, string name, string role)
{
    ofstream fout;
    fout.open("Attendence.txt", ios::app); //opening file in append mode
    if (fout.is_open())
    {
        char* dt = getcurrtime();
        fout << id << "\t" << name << "\t" << role << "\t" << dt; //marking attendence
        cout << id << " Your Attendence is marked!!\n";
    }
    else
        cout << "File not opened\n";

}

bool FloorManager::Search(string i)
{
    fstream newfile;

    string str = i;
    int index = 0;
    string tp[100];
    bool found = false;
    newfile.open("timings.txt", ios::in);
    if (newfile.is_open())
    {

        while (getline(newfile, tp[index]))
        {
            found = tp[index].find(str) != std::string::npos;

            if (found)
                return found;

            ++index;
        }
        newfile.close();
    }
    return found;

}
bool FloorManager::Update(string i, string c, string update)
{
    fstream newfile;
    string str = i;
    string str1 = c;
    int index = 0;
    string tp[30];
    bool found = false;
    newfile.open("timings.txt", ios::in);
    if (newfile.is_open())
    {
        while (getline(newfile, tp[index]))
            ++index;

        newfile.close();
    }
    for (int i = 0; i < index; ++i)
    {
        found = tp[i].find(str) != std::string::npos;
        if (found)
        {
            tp[i] = str + " " + str1 + " " + update;
        }
    }

    newfile.open("timings.txt", ios::out);
    if (newfile.is_open())
        for (int i = 0; i < index; ++i)
        {
            newfile << tp[i];
            newfile << endl;
        }
    newfile << tp[index];
    newfile.close();
    return found;
}

StoreManager::StoreManager()
{
    Name = "";
}

StoreManager::StoreManager(string n, string q, string r, int o, int id) : Staff(q, r, o, id)
{
    Name = n;
}

void StoreManager::set_name(string n)
{
    Name = n;
}

string StoreManager::get_name()
{
    return Name;
}
void StoreManager::ManageDiscountPolicies()
{

}

StoreManager::~StoreManager()
{
    Name = "";
}

FloorManager::FloorManager()
{
    Name = "";
}

FloorManager::FloorManager(string n, string q, string r, int o, int id) : Staff(q, r, o, id)
{
    Name = n;
}

void FloorManager::set_name(string n)
{
    Name = n;
}

string FloorManager::get_name()
{
    return Name;
}

void FloorManager::TrackAttendence()
{

}

void FloorManager::ViewReports()
{

}

void FloorManager::ManageWorkShift()
{

}

FloorManager::~FloorManager()
{
    Name = "";
}


SalesAgent::SalesAgent(string n, string q, string r, int o, int id) : Staff(q, r, o, id)
{
    Name = n;
}

void SalesAgent::set_name(string n)
{
    Name = n;
}

string SalesAgent::get_name()
{
    return Name;
}

void SalesAgent::CheckIn()
{

}

void SalesAgent::CheckOut()
{

}

SalesAgent::~SalesAgent()
{
    Name = "";
}

StoreAdmin::StoreAdmin()
{
    Name = "";
}

StoreAdmin::StoreAdmin(string n, string q, string r, int o, int id) : Staff(q, r, o, id)
{
    Name = n;
}

void StoreAdmin::set_name(string n)
{
    Name = n;
}

string StoreAdmin::get_name()
{
    return Name;
}

void StoreAdmin::ManageUser()
{

}
StoreAdmin::~StoreAdmin()
{
    Name = "";
}


InventoryManager::InventoryManager()
{
    Name = "";
}

InventoryManager::InventoryManager(string n, string q, string r, int o,int id) : Staff(q, r, o, id)
{
    Name = n;
}

void InventoryManager::set_name(string n)
{
    Name = n;
}

string InventoryManager::get_name()
{
    return Name;
}

void InventoryManager::ManageStoreInventory()
{

}
InventoryManager::~InventoryManager()
{
    Name = "";
}