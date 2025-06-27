#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <filesystem>

#include <json.hpp>
using json = nlohmann::json;

using namespace std;

class Prsnr {
    private:
        int prsnrAge;
        int prsnrHeight;
        int prsnrCellNo;
        int prsnrUniqueID;
        int prsnrSentenceYear;
        int prsnrCNIC;
        string prsnrName;
        string prsnrGender;
        string prsnrDOB;
        string prsnrCrimeType;
        string prsnrEntryDate;
        string prsnrReleaseDate;

    public:
        Prsnr(const string& name, int age, const string& gender, const string& dob, int cnic, int height, const string& crimeType, 
              int uniqueID, int cellNo, const string& entryDate, int sentenceYears, const string& releaseDate)
        : prsnrName(name)
        , prsnrDOB(dob)
        , prsnrEntryDate(entryDate)
        , prsnrReleaseDate(releaseDate)
        , prsnrCNIC(cnic)
        , prsnrAge(age)
        , prsnrCrimeType(crimeType)
        , prsnrGender(gender)
        , prsnrHeight(height)
        , prsnrCellNo(cellNo)
        , prsnrUniqueID(uniqueID)
        , prsnrSentenceYear(sentenceYears)
        {
        }

        int getPrsnrAge() const {
            return prsnrAge;
        }
        int getPrsnrHeight() const {
            return prsnrHeight;
        }
        int getPrsnrCellNo() const {
            return prsnrCellNo;
        }
        int getPrsnrUniqueID() const {
            return prsnrUniqueID;
        }
        int getPrsnrSentenceYear() const {
            return prsnrSentenceYear;
        }
        int getPrsnrCNIC() const {
            return prsnrCNIC;
        }
        string getPrsnrName() const {
            return prsnrName;
        }
        string getPrsnrGender() const {
            return prsnrGender;
        }
        string getPrsnrCrimeType() const {
            return prsnrCrimeType;
        }
        string getPrsnrDOB() const {
            return prsnrDOB;
        }
        string getPrsnrEntryDate() const {
            return prsnrEntryDate;
        }
        string getPrsnrReleaseDate() const {
            return prsnrReleaseDate;
        }

        void setPrsnrAge(const int& prsnrAge) {
            this->prsnrAge = prsnrAge;
        }
        void setPrsnrHeight(const int& prsnrHeight) {
            this->prsnrHeight = prsnrHeight;
        }
        void setPrsnrCellNo(const int& prsnrCellNo) {
            this->prsnrCellNo = prsnrCellNo;
        }
        void setPrsnrUniqueID(const int& prsnrUniqueID) {
            this->prsnrUniqueID = prsnrUniqueID;
        }
        void setPrsnrSentenceYear(const int& prsnrSentenceYear) {
            this->prsnrSentenceYear = prsnrSentenceYear;
        }
        void setPrsnrCNIC(const int& prsnrCNIC) {
            this->prsnrCNIC = prsnrCNIC;
        }
        void setPrsnrName(const string& prsnrName) {
            this->prsnrName = prsnrName;
        }
        void setPrsnrGender(const string& prsnrGender) {
            this->prsnrGender = prsnrGender;
        }
        void setPrsnrCrimeType(const string& prsnrCrimeType) {
            this->prsnrCrimeType = prsnrCrimeType;
        }
        void setPrsnrDOB(const string& prsnrDOB) {
            this->prsnrDOB = prsnrDOB;
        }
        void setPrsnrEntryDate(const string& prsnrEntryDate) {
            this->prsnrEntryDate = prsnrEntryDate;
        }
        void setPrsnrReleaseDate(const string& prsnrReleaseDate) {
            this->prsnrReleaseDate = prsnrReleaseDate;
        }

        void displayPrsnr() const;
};

class Staff {
    private:
        string staffName;
        string staffGender;
        string staffDOB;
        string staffJoiningDate;
        string staffDuty;
        int staffCNIC;
        int staffAge;
        int staffUniqueID;

    public:
        Staff(const string& name, int age, const string& gender, const string& dob, int cnic, int uniqueID, const string& duty, const string& joiningDate)
        : staffName(name)
        , staffDOB(dob)
        , staffJoiningDate(joiningDate)
        , staffCNIC(cnic)
        , staffAge(age)
        , staffDuty(duty)
        , staffGender(gender)
        , staffUniqueID(uniqueID)
        {
        }

        string getStaffName() const {
            return staffName;
        }
        string getStaffGender() const {
            return staffGender;
        }
        string getStaffDOB() const {
            return staffDOB;
        }
        string getStaffJoiningDate() const {
            return staffJoiningDate;
        }
        string getStaffDuty() const {
            return staffDuty;
        }
        int getStaffCNIC() const {
            return staffCNIC;
        }
        int getStaffAge() const {
            return staffAge;
        }
        int getStaffUniqueID() const {
            return staffUniqueID;
        }

        void setStaffName(const string& staffName) {
            this->staffName = staffName;
        }
        void setStaffGender(const string& staffGender) {
            this->staffGender = staffGender;
        }
        void setStaffDOB(const string& staffDOB) {
            this->staffDOB = staffDOB;
        }
        void setStaffJoiningDate(const string& staffJoiningDate) {
            this->staffJoiningDate = staffJoiningDate;
        }
        void setStaffDuty(const string& staffDuty) {
            this->staffDuty = staffDuty;
        }
        void setStaffCNIC(const int& staffCNIC) {
            this->staffCNIC = staffCNIC;
        }
        void setStaffAge(const int& staffAge) {
            this->staffAge = staffAge;
        }
        void setStaffUniqueID(const int& staffUniqueID) {
            this->staffUniqueID = staffUniqueID;
        }

        void displayStaff() const;
};

class Cell {
    private:
        static const int totalCellNum = 250;
        int cellNo;
        bool cellStatus;
        int securityLvl;

    public:
        Cell(int no, bool status, int lvl)
        : cellNo(no)
        , cellStatus(status)
        , securityLvl(lvl)
        {
        }

        int getCellNo() const {
            return cellNo;
        }
        bool getCellStatus() const {
            return cellStatus;
        }
        int getSecurityLevel() const {
            return securityLvl;
        }

        void setCellStatus(int status) {
            cellStatus = status;
        }

        void displayCell();
};

class PrisonMgmt {
    private:
        int userChoice;
        int age, height, cellNo, cnic, sentenceYear, id;
        string name, dob, gender, crimeType, entryDate, releaseDate, duty;
        string crimeTypeTable[9] = {"Rape", "Theft", "Fraud", "Murder", "Assault", "Burglary", "Kidnaping", "CyberCrime", "Drug Offense"};
        string staffDutyTable[5] = {"Cook", "Guard", "Janitor", "Supervisor", "psychiatrist"};
        vector<Prsnr> prsnr;
        vector<Staff> staff;
        vector<Cell> cell;

    public:
        PrisonMgmt() {
            for(int i=1; i <=250; i++) {
                int lvl;
                if(i <= 115) {lvl = 3;}
                else if(i <=200) {lvl = 5;}
                else {lvl = 10;};

                cell.emplace_back(i, 0, lvl);
            }
        }
        void displayMenu();
        void runProgram();

        void addPrsnr();
        void releasePrsnr();
        void displayAllPrsnr();

        void addStaff();
        void fireStaff();
        void displayAllStaff();

        int getCrimeSecurityLevel(const string& crimeType);
        int findAvailableCell(int securityLvl);

        int assignCellToPrsnr(string);
        void displayAllCell();

        void saveDataToFile();
        void loadDataFromFile();
};

int main() {
    PrisonMgmt pms;
    pms.runProgram();

    return 0;
}

void Prsnr :: displayPrsnr() const {
    cout << "Prisoner Name : " << prsnrName << endl << "Age : " << prsnrAge << endl 
    << "Gender : " << prsnrGender << endl << "Date of Birth : " << prsnrDOB << endl
    << "CNIC : " << prsnrCNIC << endl << "Height : " << prsnrHeight << endl 
    << "Crime Type : " << prsnrCrimeType << endl << "Unique ID : " << prsnrUniqueID << endl
    << "Allocated Cell No. : " << prsnrCellNo << endl << "Admission Date : " << prsnrEntryDate << endl 
    << "Sentence Year :: " << prsnrSentenceYear << endl << "Expected Release Date : " << prsnrReleaseDate << endl;
}

void Staff :: displayStaff() const {
    cout << "Member Name : " << staffName << endl << "Age : " << staffAge << endl 
    << "Gender : " << staffGender << endl << "Date of Birth : " << staffDOB << endl
    << "CNIC : " << staffCNIC << endl << "Unique ID : " << staffUniqueID << endl
    << "Duty : " << staffDuty << endl << "Hired on : " << staffJoiningDate << endl;
}

void Cell :: displayCell() {
    cout << "Cell No. : " << cellNo << endl
         << "Cell Status : " << (cellStatus == 0 ? "Free" : "Occupied") << endl
         << "Security Level : " << securityLvl << " - Star" << endl;
}

void PrisonMgmt :: displayMenu() {
    while(true) {
        system("clear");
        cout << "============ Prison Management System ============" << endl << endl;
        cout << "1) Add Prisoner" << endl;
        cout << "2) Release Prisoner" << endl;
        cout << "3) Display all Prisoner" << endl;
        cout << "4) Add Staff Member" << endl;
        cout << "5) Fire Staff Member" << endl;
        cout << "6) Display All Staff" << endl;
        cout << "7) Display All Cells" << endl;
        cout << "0) Exit PMS" << endl;
        cout << "Enter Selection :: ";
        cin >> userChoice;
        
        switch (userChoice) {
        case 1: addPrsnr();
            break;
        case 2: releasePrsnr();
            break;
        case 3: displayAllPrsnr();
            break;
        case 4: addStaff();
            break;
        case 5: fireStaff();
            break;
        case 6: displayAllStaff();
            break;
        case 7: displayAllCell();
            break;
        case 0: cout << "Exiting Program..." << endl;
                exit(0);
            break;
        default:
            cout << "Invalid Selection... \nSelect option (1-7) :: ";
            continue;
        } 
    }   
}

void PrisonMgmt::runProgram() {
        displayMenu();
}

void PrisonMgmt :: addPrsnr() {
    cout << "=============== Prisoner Admission ===============" << endl << endl;

    cout << "Enter Prisoner Name \n:> ";
    cin >> ws; getline(cin, name);

    cout << "Enter Prisoner Age \n:> ";
    cin >> age;

    cout << "Select Prisoner Gender." << endl;
    while(true) {
        cout << "1) Male" << endl;
        cout << "2) Female" << endl;
        cout << "Enter Selection (1-2) :: ";
        cin >> userChoice;
        if(userChoice == 1) {
            gender = "Male";
            break;
        } else if(userChoice == 2) {
            gender = "Female";
            break;
        } else {
            cout << "Invalid Selection... \nTry again....." << endl;
        }
    }

    cout << "Enter Prisoner Date of Birth (DD-MM-YYYY) \n:> ";
    cin >> ws; getline(cin, dob);

    cout << "Enter Prisoner CNIC (Numbers Only) \n:> ";
    cin >> cnic;

    cout << "Enter Prisoner Height (in cm) \n:> ";
    cin >> height;

    cout << "Select Prisoner Crime Type." << endl;
    while(true) {
        cout << "1) Rape" << endl;
        cout << "2) Theft" << endl;
        cout << "3) Fraud" << endl;
        cout << "4) Murder" << endl;
        cout << "5) Assault" << endl;
        cout << "6) Burglary" << endl;
        cout << "7) Kidnaping" << endl;
        cout << "8) CyberCrime" << endl;
        cout << "9) Drug Offense" << endl;
        cout << "Enter Selection :: ";
        cin >> userChoice;
        if (userChoice >= 1 && userChoice <= 9) {
            crimeType = crimeTypeTable[userChoice - 1];
            break;
        } else {
            cout << "Invalid Selection... \nTry Again..." << endl;
        }
    }

    id = prsnr.size()+1;

    assignCellToPrsnr(crimeType);

    cout << "Enter Prisoner Admission Date (DD-MM-YYYY) \n:> ";
    cin >> ws; getline(cin, entryDate);

    cout << "Enter the number of year This Prisoner is Sentenced :: ";
    cin >> sentenceYear;

    int day, month, year;
    char dash;
    istringstream iss(entryDate);
    iss >> day >> dash >> month >> dash >> year;
    int releaseYear = year + sentenceYear;
    ostringstream oss;
    oss << (day < 10 ? "0" : "") << day << "-"
        << (month < 10 ? "0" : "") << month << "-"
        << releaseYear;
    releaseDate = oss.str();

    prsnr.emplace_back(name, age, gender, dob, cnic, height, crimeType, id, cellNo, entryDate, sentenceYear, releaseDate);
    filesystem::create_directories("data");
    saveDataToFile();

    cout << endl << "Prisoner Added Successfully...";
    cout << endl << "Press Enter To continue...";
    cin >> ws; cin.get();
}

void PrisonMgmt :: releasePrsnr() {
    cout << "=============== Releasing Prisoner ===============" << endl << endl;

    cout << "How do you want to Select Prisoner to Release." << endl;
    cout << "1) By Name" << endl;
    cout << "2) By ID" << endl;
    while(true) {
        cout << "Enter Selection (1-2) :: ";
        cin >> userChoice;

        if(userChoice == 1) {
            cout << "Selecting Prisoner By Name." << endl;
            for(int i=0; i<=prsnr.size(); ++i) {
                cout << i+1 << ". " << prsnr[i].getPrsnrName() << endl;
            }
            break;
        } else if(userChoice == 2) {
            cout << "Selecting Prisoner By ID." << endl;
            for(int i=0; i<=prsnr.size(); ++i) {
                cout << i+1 << ". " << prsnr[i].getPrsnrUniqueID() << endl;
            }
            break;
        } else {
            cout << endl << "Invalid Selection....";
            cout << endl << "Try Again..." << endl;
        }
    }

    while(true) {
        cout << "Select the Prisoner you want to Fire :: ";
        cin >> userChoice;
        if(userChoice >= 1 && userChoice < prsnr.size()) {
            prsnr.erase(prsnr.begin() + userChoice -1);
            filesystem::create_directories("data");
            saveDataToFile();
            cout << "Prisoner Has been Released Successfully..." << endl;
            cout << "Press Enter to continue...";
            cin >> ws; cin.get();
            break;
        } else {
            cout << "Invalid Input... Try again..." << endl;
        }
    }
}

void PrisonMgmt :: displayAllPrsnr() {
    cout << "================== All Prisoners =================" << endl << endl;
    loadDataFromFile();
    if(prsnr.empty()) {
        cout << "No staff Hired... \nSo No Staff To Display...";
        cin >> ws; cin.get();
        return;
    }

    for(int i=0; i < prsnr.size(); ++i) {
        cout << "Prisoner " << i+1 << ":\n";
        prsnr[i].displayPrsnr();
        cout << "--------------------------------------------------";
        cout << endl;
    }
    cout << "All Prisoners Displayed Successfully...";
    cout << endl << "Press Enter to Continue...";
    cin >> ws; cin.get();
}

void PrisonMgmt :: addStaff() {
    cout << "=============== Hiring Staff Member ==============" << endl << endl;

    cout <<  "Enter Member Name \n:> ";
    cin >> ws; getline(cin, name);

    cout << "Enter Member Age :: ";
    cin >> age;
    
    cout << "Select Member Gender." << endl;
    while(true) {
        cout << "1) Male" << endl;
        cout << "2) Female" << endl;
        cout << "Enter Selection (1-2) :: ";
        cin >> userChoice;
        if(userChoice == 1) {
            gender = "Male";
            break;
        } else if(userChoice == 2) {
            gender = "Female";
            break;
        } else {
            cout << "Invalid Selection... \nTry again....." << endl;
        }
    }
    
    cout << "Enter Member Date of Birth \n:> ";
    cin >> ws; getline(cin, dob);

    cout << "Enter Member CNIC (Numbers Only) \n:> ";
    cin >> cnic;
    
    id = staff.size() + 1;
    
    cout << "Select Member Duty." << endl;
    while(true) {
        cout << "1) Cook" << endl;
        cout << "2) Guard" << endl;
        cout << "3) Janitor" << endl;
        cout << "4) Supervisor" << endl;
        cout << "5) psychiatrist" << endl;
        cout << "Enter Selection :: ";
        cin >> userChoice;
        if (userChoice >= 1 && userChoice <= 5) {
            duty = staffDutyTable[userChoice - 1];
            break;
        } else {
            cout << "Invalid Selection... \nTry Again..." << endl;
        }
    }
    
    cout << "Enter the Date of Hiring This Member (DD-MM-YYYY) \n:> ";
    cin >> ws; getline(cin, entryDate);
    
    staff.emplace_back(name, age, gender, dob, cnic, id, duty, entryDate);
    filesystem::create_directories("data");
    saveDataToFile();

    cout << endl << "Staff Member Added Successfully...";
    cout << endl << "Press Enter To continue...";
    cin >> ws; cin.get();
}

void PrisonMgmt :: fireStaff() {
    cout << "================== Firing Staff ==================" << endl << endl;

    cout << "How do you want to Select Staff to Fire." << endl;
    cout << "1) By Name" << endl;
    cout << "2) By ID" << endl;
    while(true) {

        cout << "Enter Selection (1-2) :: ";
        cin >> userChoice;

        if(userChoice == 1) {
            cout << "Selecting Staff By Name." << endl;
            for(int i=0; i<=staff.size(); ++i) {
                cout << i+1 << ". " << staff[i].getStaffName() << endl;
            }
            break;
        } else if(userChoice == 2) {
            cout << "Selecting Staff By ID." << endl;
            for(int i=0; i<=staff.size(); ++i) {
                cout << i+1 << ". " << staff[i].getStaffUniqueID() << endl;
            }
            break;
        } else {
            cout << endl << "Invalid Selection....";
            cout << endl << "Try Again..." << endl;
        }
    }

    cout << "Select the Staff Member you want to Fire :: ";
    cin >> userChoice;

    while(true) {
        if(userChoice >= 1 && userChoice < staff.size()) {
            staff.erase(staff.begin() + userChoice -1);
            filesystem::create_directories("data");
            saveDataToFile();
            cout << "Staff Has been fired Successfully..." << endl;
            cout << "Press Enter to continue...";
            cin >> ws; cin.get();
            break;
        } else {
            cout << "Invalid Input... Try again..." << endl;
        }
    }
}

void PrisonMgmt :: displayAllStaff() {
    cout << "================ All Staff Members ===============" << endl << endl;
    loadDataFromFile();
    if(staff.empty()) {
        cout << "No staff Hired... \nSo No Staff To Display...";
        cin >> ws; cin.get();
        return;
    }

    for(int i=0; i < staff.size(); ++i) {
        cout << "Member " << i+1 << ":\n";
        staff[i].displayStaff();
        cout << "--------------------------------------------------";
        cout << endl;
    }

    cout << "All Members Displayed Successfully...";
    cout << endl << "Press Enter to Continue...";
    cin >> ws; cin.get();
}

int PrisonMgmt :: getCrimeSecurityLevel(const string&) {
    if (crimeType == "Theft" || crimeType == "Fraud" || crimeType == "CyberCrime") return 3;
    if (crimeType == "Assault" || crimeType == "Burglary" || crimeType == "Kidnaping") return 5;
    return 10; // Rape, Murder, Drug Offense
}

int PrisonMgmt :: findAvailableCell(int securityLvl) {
    for (Cell& c : cell) {
        if (c.getSecurityLevel() == securityLvl && c.getCellStatus() == 0) {
            c.setCellStatus(1); // mark as occupied
            return c.getCellNo();
        }
    }
    return -1; // none found
}

int PrisonMgmt :: assignCellToPrsnr(string crimeType) {
    int securityLvl = getCrimeSecurityLevel(crimeType);
    cellNo = findAvailableCell(securityLvl);

    if (cellNo == -1) {
        cout << "No available cells at " << securityLvl << "-star security level!\n";
        cout << "Press Enter to return to menu...";
        cin >> ws; cin.get();
        exit(0);
    } else {
        cout << "Assigned Cell No. " << cellNo << " [" << securityLvl << " - Star Security]\n";
    }
    return cellNo;
}

void PrisonMgmt :: displayAllCell() {
    cout << "================ All Prison Cells ================" << endl << endl;
    loadDataFromFile();
    for (int i = 0; i < cell.size(); ++i) {
        string level;
        if (cell[i].getCellNo() <= 115)
            level = "3-Star";
        else if (cell[i].getCellNo() <= 200)
            level = "5-Star";
        else
            level = "High Security";

        cell[i].displayCell();
        cout << "--------------------------------------------------";
        cout << endl;
    }
    cout << "All cell Displayed..." << endl;
    cout << "Press Enter to continue...";
    cin >> ws; cin.get();
}

void PrisonMgmt::saveDataToFile() {
    json j;

    // Save prisoners
    for (const auto& p : prsnr) {
        j["prisoners"].push_back({
            {"name", p.getPrsnrName()},
            {"age", p.getPrsnrAge()},
            {"gender", p.getPrsnrGender()},
            {"dob", p.getPrsnrDOB()},
            {"cnic", p.getPrsnrCNIC()},
            {"height", p.getPrsnrHeight()},
            {"crimeType", p.getPrsnrCrimeType()},
            {"uniqueID", p.getPrsnrUniqueID()},
            {"cellNo", p.getPrsnrCellNo()},
            {"entryDate", p.getPrsnrEntryDate()},
            {"sentenceYear", p.getPrsnrSentenceYear()},
            {"releaseDate", p.getPrsnrReleaseDate()}
        });
    }

    // Save staff
    for (const auto& s : staff) {
        j["staff"].push_back({
            {"name", s.getStaffName()},
            {"age", s.getStaffAge()},
            {"gender", s.getStaffGender()},
            {"dob", s.getStaffDOB()},
            {"cnic", s.getStaffCNIC()},
            {"uniqueID", s.getStaffUniqueID()},
            {"duty", s.getStaffDuty()},
            {"joiningDate", s.getStaffJoiningDate()}
        });
    }

    // Save cell info
    for (const auto& c : cell) {
        j["cells"].push_back({
            {"cellNo", c.getCellNo()},
            {"status", c.getCellStatus()},
            {"securityLevel", c.getSecurityLevel()}
        });
    }

    ofstream outFile("data/prison_data.json");
    if (outFile.is_open()) {
        outFile << setw(4) << j;
        outFile.close();
    } else {
        cerr << "Failed to save data to file!" << endl;
    }
}

void PrisonMgmt::loadDataFromFile() {
    ifstream inFile("data/prison_data.json");
    if (!inFile.is_open()) {
        cerr << "No data file found. Skipping load..." << endl;
        return;
    }

    json j;
    inFile >> j;

    // Clear previous data
    prsnr.clear();
    staff.clear();
    cell.clear();

    // Load prisoners
    for (const auto& p : j["prisoners"]) {
        prsnr.emplace_back(
            p["name"], p["age"], p["gender"], p["dob"], p["cnic"], p["height"],
            p["crimeType"], p["uniqueID"], p["cellNo"], p["entryDate"],
            p["sentenceYear"], p["releaseDate"]
        );
    }

    // Load staff
    for (const auto& s : j["staff"]) {
        staff.emplace_back(
            s["name"], s["age"], s["gender"], s["dob"], s["cnic"],
            s["uniqueID"], s["duty"], s["joiningDate"]
        );
    }

    // Load cells
    for (const auto& c : j["cells"]) {
        cell.emplace_back(c["cellNo"], c["status"], c["securityLevel"]);
    }

    inFile.close();
}
